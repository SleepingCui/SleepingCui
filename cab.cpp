
#include <iostream>
#include <thread>
#include <vector>
// ���ӵ��㷨����
void complexAlgorithm() {
    // ִ��һϵ�и��ӵļ������
    for (int i = 0; i < 100000000; i++) {
        double result = i * i;
    }
}

int main() {
    std::cout << "Welcome use cpu dumper v1.0" << std::endl ;
    while (1){
        // �����߳���
        int numThreads;
        std::cout << "Number of Thread:";
        std::cin >> numThreads;
        // ��������̲߳����и����㷨
        std::cout << "[INFO]starting..." << std::endl;
        std::vector<std::thread> threads;
        for (int i = 0; i < numThreads; i++) {
            threads.push_back(std::thread(complexAlgorithm));
        }

        // �ȴ������߳����
        for (auto& thread : threads) {
            thread.join();
        }

        // ��������Ϣ
        std::cout << "[OK]Successful program completion!" << std::endl;

    }

}