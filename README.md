[中文](README_CN.md/ "中文"). 
# Complex Algorithms Benchmark

## Introduction

The Complex Algorithms Benchmark is a program that runs a complex algorithm function in parallel using multiple threads. It prompts the user to enter the number of threads they want to use for running the algorithm. This program is useful for testing the performance of a system when running complex algorithms in parallel.

## Principle

The program uses multiple threads to run the `complexAlgorithm` function in parallel. Each thread performs a series of complex calculations, which can be executed simultaneously. By using multiple threads, the program can take advantage of the system's multi-core architecture, which can significantly improve the performance of the algorithm.

## Method

The program prompts the user to enter the number of threads they want to use for running the algorithm. It then creates multiple threads and runs the `complexAlgorithm` function in parallel. After all threads have completed, the program outputs a completion message. The user can repeat the process by entering a new number of threads.

## Prerequisites

This program requires a C++ compiler to compile the source code.

## License

This program is licensed under the MIT License. See the [LICENSE](chrome-extension://dhoenijjpgpeimemopealfcbiecgceod/chat/LICENSE) file for more information.
