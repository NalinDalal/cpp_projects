#include <iostream>
using namespace std;

//increment operator
int main() {

  /* int a = 0;
    while (a <= 100) {
        cout<<a<<" ";
        a++;
        //a++ ie. post operator;it will be like a=a+1 but the value of a will be incremented after the execution of the statement
        //++a ie. pre operator;it will be like a=a+1 but the value of a will be incremented before the execution of the statement
    }
    */
/*
    int i=0;
    i = i++ - --i + ++i - i--;
    cout<<i;//output=0
    */
/**
    int i=1,j=2,k=3;

    int m=i-- - j-- - k--;

    cout<<i<<endl<<j<<endl<<k<<endl<<m;//output=0 1 2 -4
*/

//relational operators
/*
== ture for both operand equal
!= true for both operand not equal
> , < -comparison opersator
>= , <= -comparison opersator
*/

//logical operators
/*
&& AND Gate
|| OR Gate
! NOT Gate
*/

int n;
cin>>n;
if(n%2==0 && n%3==0)
{
    cout<<"n is divisible by 2 and 3"<<endl;
}
else if(n%2==0 || n%3==0)
{
    cout<<"n is divisible by 2 or 3"<<endl;
}
else if(n%2==0)
{
    cout<<"n is divisible by 2"<<endl;
}
else if(n%3==0)
{
    cout<<"n is divisible by 3"<<endl;
}
else(n%2!=0 && n%3!=0)
{
    cout<<"n is divisible by none"<<endl;
}
    return 0;
}