#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void threadFunction(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, []{ return ready; });
    std::cout << "Thread " << id << " is working..." << std::endl;
}

int main() {
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);

    // Do some work...
    std::cout << "Hello Menna ... \n";
    std::cout << "Hello Menna ... \n";
    std::cout << "Hello Menna ... \n";
    std::cout << "Hello Menna ... \n";
    std::cout << "Hello Menna ... \n";

    {
        std::lock_guard<std::mutex> lock(mtx);
        ready = true;
    }

    cv.notify_all(); // Notify waiting threads

    t1.join();
    t2.join();

    return 0;
}
