//#include <atomic>
#include<iostream>
#include <type_traits>

using namespace std;

int main()
{
    /*
    auto ac = alignof('c');
    auto ai = alignof(1);
    auto ad = alignof(2.0);

    int a[20];
    auto aa = alignof(a);
*/

    auto ac = alignof(char);   // Use alignof(char) instead of alignof('c')
    auto ai = alignof(int);    // Use alignof(int) instead of alignof(1)
    auto ad = alignof(double); // Use alignof(double) instead of alignof(2.0)

    int a[20];
    auto aa = alignof(decltype(a)); // Use decltype(a) to get the type of the array

    std::cout << "Alignment of char: " << ac << std::endl;
    std::cout << "Alignment of int: " << ai << std::endl;
    std::cout << "Alignment of double: " << ad << std::endl;
    std::cout << "Alignment of array: " << aa << std::endl;
    return 0;

    /*
    output:
    Alignment of char: 1
Alignment of int: 4
Alignment of double: 8
Alignment of array: 4
*/
}
