#include <iostream>
using namespace std;

int main()
{
    int n,x,y,z;
    cout<<"Enter max term: ";
    cin>>n;
    x=0;
    y=1;
    for(z=0;z<=n;z=x+y)
    {
        cout<<"\n"<<z;
        x=y;
        y=z;
    }
    return 0;
}