#include <iostream>
#include <vector>
#include <queue>
#include <thread>
#include <functional>
#include <mutex>
#include <condition_variable>

class ThreadPool {
public:
    ThreadPool(size_t numThreads) : stop(false) {
        for (size_t i = 0; i < numThreads; ++i) {
            workers.emplace_back([this] {
                while (true) {
                    std::function<void()> task;
                    {
                        std::unique_lock<std::mutex> lock(queueMutex);
                        condition.wait(lock, [this] { return stop || !tasks.empty(); });
                        if (stop && tasks.empty()) {
                            return;
                        }
                        task = std::move(tasks.front());
                        tasks.pop();
                    }
                    task();
                }
            });
        }
    }

    void EnqueueTask(std::function<void()> task) {
        {
            std::unique_lock<std::mutex> lock(queueMutex);
            tasks.push(task);
        }
        condition.notify_one();
    }

    ~ThreadPool() {
        {
            std::unique_lock<std::mutex> lock(queueMutex);
            stop = true;
        }
        condition.notify_all();
        for (std::thread &worker : workers) {
            worker.join();
        }
    }

private:
    std::vector<std::thread> workers;
    std::queue<std::function<void()>> tasks;
    std::mutex queueMutex;
    std::condition_variable condition;
    bool stop;
};

// Simulate image processing by adding a simple sleep function
void ProcessImage(int imageId) {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Processed image " << imageId << " on thread " << std::this_thread::get_id() << std::endl;
}

int main() {
    const int numImages = 10;
    const int numThreads = 4;

    ThreadPool threadPool(numThreads);

    // Enqueue image processing tasks
    for (int i = 0; i < numImages; ++i) {
        threadPool.EnqueueTask([i] {
            ProcessImage(i);
        });
    }

    // Sleep to allow time for tasks to complete
    std::this_thread::sleep_for(std::chrono::seconds(10));

    return 0;
}
