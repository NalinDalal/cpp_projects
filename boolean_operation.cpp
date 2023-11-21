#include <iostream>
int main(){
    bool a = true;
    bool b = false;

    bool x = a + b;
    bool y = a - b;
    bool z = a || b;
    bool k = a * b;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    std::cout << "k: " << k << std::endl;

    return 0;
}