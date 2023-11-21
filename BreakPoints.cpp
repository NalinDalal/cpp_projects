#include <iostream>

//conditional breakpoint trigger under a certain condition
//action breakpoint trigger under action

int main() {
    int a = 5;
    int b = 10;
    int result;

    // Set a breakpoint here to inspect variables a, b, and result.
    // In most IDEs, you can do this by clicking in the left margin or using a debugger.
    
    result = a + b;

    std::cout << "The sum of " << a << " and " << b << " is " << result << std::endl;
----------------------------------------------------------------------------------------------
    int p = 5;
    int q = 10;
    int res;

    // Create a conditional breakpoint with an action.
    // In Visual Studio, right-click on the breakpoint and select "Condition..." and "Actions..."
    // Set the condition to a == 5, and add an action to print a message.

    res = p + q;

    std::cout << "The sum of " << p << " and " << q << " is " << res << std::endl;

    return 0;
}
