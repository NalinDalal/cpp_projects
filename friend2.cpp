#include <iostream>
using namespace std;

// 1+4i
// 5+8i
//-------
// 6+12i
class Complex{
    int a,b;
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }

        friend Complex sumComplex(Complex o1,Complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" +"<<b<<"i"<<endl;
        }
};

//to sum the complex number

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber(); //output:Your number is 1 +4i
    c2.printNumber(); //output: Your number is 5 +8i

    sum=sumComplex(c1,c2);
    sum.printNumber();

    std::cin.get();
}

/*
Properties:
1.Not in scope of class
2.can't be called from object of class;c1.Complex()==invalid
3.can be invoked w/o help of any obj
4.usually contain arg as obj
5.can be declared inside public/private section of class
6.can't access member directly by names, need obj_name,mem_name to access any member
*/