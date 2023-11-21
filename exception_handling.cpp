/*
Exception is unexpectd/unwanted situation occuring at run time

try{
    //put risky code
}
catch(exception type e){
    //code to handle it
}
*/
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    double bal=1000;
    try{
        double amt;
        cout<<"Enter deposit amount: ";
        cin>>amt;
        if(amt<=0)
        {
            cout<<"Invalid amount:"<<endl;
        }
        if(amt>bal)
        {
           // cout<<"insufficient"<<endl;
           throw runtime_error("Insufficient fund: ");
        }
        bal=bal-amt;
        cout<<"availabel:"<<bal;
    }
    catch(exception e){
        cout<<e.what();
    }
}