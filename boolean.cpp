#include <iostream>

// Define the function f outside of main
void f(int a, int b)
{
    bool b1 {a == b};
    // Do something with b1 if needed
}

int main()
{
    // Call the function f from main
    int num1 = 5;
    int num2 = 5;
    f(num1, num2);

    return 0;
}
