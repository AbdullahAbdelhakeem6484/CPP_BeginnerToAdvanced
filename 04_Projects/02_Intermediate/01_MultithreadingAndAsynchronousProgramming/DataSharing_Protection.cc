#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

std::vector<int> data; // Shared data
std::mutex dataMutex;

void threadFunction(int id) {
    std::lock_guard<std::mutex> lock(dataMutex);//lock
    data.push_back(id);
    // lock_guard destructor ~
}

int main() {
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(threadFunction, i);
    }

    for (std::thread& t : threads) {
        t.join();
    }

    for (int val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
