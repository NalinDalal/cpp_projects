#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int num1=10;
    int num2=57;
    sum(num1, num2);
    std::cout << sum <<std::endl;
}