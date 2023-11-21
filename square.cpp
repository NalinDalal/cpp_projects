#include <iostream>
using namespace std;
double square(double x)
{
    return x*x;
}
void print_square(double x)
{
    cout<<"the square of "<<x<< " is "<<square(x)<<"\n";
}

int main()
{
    print_square(3.14);
    int i;
    "\n";
    cout<<"Enter an integer: ";
    cin>>i;
    print_square(i);

    return 0;
}