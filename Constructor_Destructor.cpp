#include <iostream>
using namespace std;

class demo{
    int a,b;
    public:
        demo(){
            cin>>a;
            cin>>b;
        }

    void putdata() {
        cout<<"a= "<<a<<"\n b= "<<b;
    }

};

int main(){
    demo aa;
    aa.putdata();
    return 0;
}