#include <iostream>
using namespace std;

class student{
    int r_no;
    char name[50];
    double fee;

    public:
    student(){
        cout<<"Enter the roll no:";
        cin>>r_no;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter fee:";
        cin>>fee;
    }

    void display(){
        cout<<endl<<r_no<<"\t"<<name<<"\t"<<fee;
    };
};

int main(){
    student s;
    s.display();
    return 0;
}