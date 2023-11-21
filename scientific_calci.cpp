#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Scientific Calculator\n";

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the operation
    cout << "Enter the operation (+, -, *, /, ^, sqrt): ";
    cin >> operation;

    // Perform the corresponding operation
    switch (operation) {
        case '+':
            cout << "Enter the second number: ";
            cin >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Enter the second number: ";
            cin >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Enter the second number: ";
            cin >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Enter the second number: ";
            cin >> num2;
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case '^':
            cout << "Enter the exponent: ";
            cin >> num2;
            cout << "Result: " << pow(num1, num2) << endl;
            break;
        case 's':
        case 'S':
            cout << "Result: " << sqrt(num1) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}
