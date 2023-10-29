/*
Thread Synchronization with Mutex:
Use Case: Protect shared resources from concurrent access.
*/

#include <chrono>
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void threadFunction(int id) {
    for (int i = 0; i < 5; ++i) {
        mtx.lock();
        std::cout << "Thread " << id << " is working..." << std::endl;
        mtx.unlock();
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    std::thread t1(threadFunction, 1);
    std::thread t2(threadFunction, 2);
    t1.join();
    t2.join();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop -start);
    std::cout << "Time taken by function without thread: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
