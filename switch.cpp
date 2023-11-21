#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;

    case 22:
        cout<<"You are 22";
        break;

    default:
    cout<<"No spcl case"<<endl;
        break;
    }
    return 0;
}
//break if removed then all cases will get print like the condition running then all after it

