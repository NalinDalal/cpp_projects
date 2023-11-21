#include<iostream>
using namespace std;

int main(){
    //pointer is a data type which holds address of other data types
//(address of)reference operator
    int a=3;
    int* b=&a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
   // & ---> address of operator
   // * ---> dereference operator


//both a,b have same address hence same result
    
    //(address at)derefcence operator
    cout<<"The value at address b is "<<*b<<endl;

    int **c=&b;
    cout<<"The adress of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    
    return 0;
}