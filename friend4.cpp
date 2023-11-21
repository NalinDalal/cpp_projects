#include <iostream>
/*
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data=value;
        }
    friend void add(X, Y);    //friend declared; Y not declared hence error we will declare beforehand
};

class Y{
    int data;
    public:
        void setValue(int value){
            data=value;
        }
    friend void add(X,Y);    
};

void add(X o1, Y o2){
    std::cout<<"Summing data of X,Y object gives me "<<o1.data+o2.data;   //error:private member
}            //o1 is object of X;o2 is obj of Y
//new output a/f friend function:Summing data of X,Y object gives me 8
int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);

    add(a1,b1);
    std::cin.get();
}
*/
class c2;

class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
        void indata(int a){
            val1=a;
        }

        void display(void){
            std::cout<<val1<<std::endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
        void indata(int a){
            val2=a;
        }

        void display(void){
            std::cout<<val2<<std::endl;
        }
};
/*
trick to swap 2 numbers a,b:
temp=a;
a=b;
b=temp;
*/
void exchange(c1 & x,c2 & y){
    int tmp=x.val1;
    x.val1=y.val2;
    y.val2=tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    std::cout<<"The value a/f exchanging becomes: ";
    oc1.display();
    std::cout<<"The value a/f exchanging becomes: ";
    oc2.display();
    //forward declaration needed
    return 0;
    /*Output:
    The value a/f exchanging becomes: 67
    The value a/f exchanging becomes: 34
*/
}