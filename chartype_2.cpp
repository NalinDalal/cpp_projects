#include <iostream>
#include <limits>

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void intval() {
    for (char c; std::cin >> c;) {
        std::cout << "The value of '" << c << "' is " << static_cast<int>(c) << '\n';
        clearInputBuffer();
    }
}

int main() {
    intval();
    return 0;
}
