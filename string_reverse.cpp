#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    cin>>str;
    
    cout<<"Reverse of String is: ";
    
    for(int i=str.length()-1;i>=0;i--)
    {
        cout<<str[i];
    }
    cout<<endl;
    cout<<"Hello World";

    return 0;
}