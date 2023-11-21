#include <atomic>
#include<iostream>

using namespace std;

int main()
{
    auto ac = alignof('c');
    auto ai = alignof(1);
    auto ad = alignof(2.0);

    int a[20];
    auto aa = alignof(a);

    return 0;
}
