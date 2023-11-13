#include <iostream>
#include <chrono>
#include <thread>

void workFunc(int* ptr, size_t times) {
    while (times--) {
        (*ptr) += 1;
    }
}

int main(int argc, char const *argv[]) {
    int* numbers = new int[3]{0, 0, 0};

    // With Thread
    auto start2 = std::chrono::high_resolution_clock::now();
    std::thread t1(workFunc, numbers, 1000000);
    std::thread t2(workFunc, numbers + 1, 2000000);
    std::thread t3(workFunc, numbers + 2, 3000000);

    t1.detach();
    t2.detach();
    t3.detach();

    auto stop2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(stop2 - start2);
    std::cout << "Time taken by function with thread: " << duration2.count() << " microseconds" << std::endl;


    // Without Thread
    auto start = std::chrono::high_resolution_clock::now();
    workFunc(numbers, 1000000);
    workFunc(numbers + 1, 2000000);
    workFunc(numbers + 2, 3000000);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Time taken by function without thread: " << duration.count() << " microseconds" << std::endl;

    for (int i = 0; i < 3; ++i)
        std::cout << "Number Slot " << i << " is " << numbers[i] << std::endl;

    delete[] numbers;
    return 0;
}
