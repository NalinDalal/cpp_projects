#include <iostream>

void intval() {
    for (char c; std::cin >> c;) {
        std::cout << "The value of '" << c << "' is " << static_cast<int>(c) << '\n';
    }
}

int main() {
    intval();
    return 0;
}
