
#include <iostream>
#include <thread>
#include <vector>
// 复杂的算法函数
void complexAlgorithm() {
    // 执行一系列复杂的计算操作
    for (int i = 0; i < 100000000; i++) {
        double result = i * i;
    }
}

int main() {
    std::cout << "Welcome use cpu dumper v1.0" << std::endl ;
    while (1){
        // 设置线程数
        int numThreads;
        std::cout << "Number of Thread:";
        std::cin >> numThreads;
        // 创建多个线程并运行复杂算法
        std::cout << "[INFO]starting..." << std::endl;
        std::vector<std::thread> threads;
        for (int i = 0; i < numThreads; i++) {
            threads.push_back(std::thread(complexAlgorithm));
        }

        // 等待所有线程完成
        for (auto& thread : threads) {
            thread.join();
        }

        // 输出完成信息
        std::cout << "[OK]Successful program completion!" << std::endl;

    }

}