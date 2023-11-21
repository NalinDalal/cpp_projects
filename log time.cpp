#include <iostream>
#include <vector>
#include <thread>
#include <stdio.h>
using namespace std::chrono;
int main()
{
    auto t0= std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    auto t1= std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(t1 - t0).count() << "nanoseconds passed\n";
    return 0;
}