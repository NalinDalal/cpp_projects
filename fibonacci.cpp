#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,i,number;
    n1=0;
    n2=1;
    std::cout<<"Number of elements:";
    std::cin>>number;
    std::cout<<n1<<n2<<" ";
    for(i=2;i<number;i++)
    {
        n3=n1+n2;
        std::cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}