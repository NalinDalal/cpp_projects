#include <iostream>

class Complex;
class Calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealComplex(Complex ,Complex);
        int sumImgComplex(Complex, Complex);
};
//class called beforehand declared later

class Complex{
    int a,b;
    friend int Calculator::sumRealComplex(Complex,Complex);
    friend int Calculator::sumImgComplex(Complex,Complex);
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }

        void printNumber(){
            std::cout<<"Your number is "<<a<<" + "<<b<<"i"<<std::endl;
        }
};

//Gives error in before hand cause you call class first declare it later
// class Calculator{
//     public:
//         void add(int a,int b){
//             return (a+b);
//         }
//         int sumRealComplex(Complex o1,Complex o2){
//             return (o1.a+o2.a);
//         }
// };
int Calculator::sumRealComplex(Complex o1,Complex o2){
            return (o1.a+o2.a);
        }
int Calculator::sumImgComplex(Complex o1,Complex o2){
            return (o1.b+o2.b);
        }
int main()
{
    // add();
    // sumRealComplex();

    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,75);
    Calculator calc;
    int res=calc.sumRealComplex(o1,o2);
    std::cout<<"Sum of real part is "<<res<<std::endl;
    int resi=calc.sumImgComplex(o1,o2);
    std::cout<<"Sum of img part is "<<resi<<std::endl;
    std::cin.get();
}