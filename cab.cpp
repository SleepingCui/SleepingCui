#include <iostream>
#include <thread>
#include <vector>
// Complex algorithm function
void complexAlgorithm() {
    // Perform a series of complex calculations
    for (int i = 0; i < 100000000; i++) {
        double result = i * i;
    }
}

int main() {
    std::cout << "Welcome to the Complex Algorithms Benchmark v1.0" << std::endl ;
    while (1){
        // Set the number of threads
        int numThreads;
        std::cout << "Number of Threads:";
        std::cin >> numThreads;
        // Create multiple threads and run the complex algorithm
        std::cout << "[INFO] Starting..." << std::endl;
        std::vector<std::thread> threads;
        for (int i = 0; i < numThreads; i++) {
            threads.push_back(std::thread(complexAlgorithm));
        }

        // Wait for all threads to complete
        for (auto& thread : threads) {
            thread.join();
        }

        // Output completion message
        std::cout << "[OK] Successful program completion!" << std::endl;

    }

}
