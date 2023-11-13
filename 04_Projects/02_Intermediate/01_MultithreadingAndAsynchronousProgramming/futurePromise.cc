#include <iostream>
#include <thread>
#include <future>

int calculateSquare(int x) {
    return x * x;
}

int main() {
    std::promise<int> resultPromise;
    std::future<int> resultFuture = resultPromise.get_future();

    std::thread worker([&resultPromise]() {
        int result = calculateSquare(5);
        resultPromise.set_value(result);
    });

    // Do some other work...

    int squareResult = resultFuture.get(); // Blocking until the result is available

    std::cout << "Square result: " << squareResult << std::endl;

    worker.join();
    return 0;
}
