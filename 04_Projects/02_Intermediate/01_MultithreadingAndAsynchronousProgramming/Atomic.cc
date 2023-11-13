#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> counter(0);

void incrementCounter() {
    for (int i = 0; i < 100000; ++i) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);
    std::thread t3(incrementCounter);

    t1.join();
    t2.join();
    t3.join();

    std::cout << "Counter value: " << counter.load() << std::endl;

    return 0;
}
