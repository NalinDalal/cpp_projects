#include<iostream>
using namespace std;
/*
struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

//union example
//better memory management
union money{
    int rice; //4
    char car; //1
    float pounds; //4 
};

int main()
{
    union money m1;
    m1.rice = 34;
    m1.car='c';
    cout<<m1.car<<endl;

    struct employee harry;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<harry.salary<<endl;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
    }
    */

    //enum
int main()
{
    enum Meal{breakfast, lunch, dinner};
    //meal has become data type
    Meal m1=breakfast; //0
    //Meal m1 = lunch;
    cout<<m1<<endl; //output=0
    cout<<breakfast<<endl; //0
    cout<<lunch<<endl; //output=1
    cout<<dinner<<endl;
    cout<<(m1==2)<<endl; //output=0
    return 0;
}