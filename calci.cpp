#include <iostream>
#include <iomanip>

int main(){
    int a, b, sum, sub, multiply, divide, ch;

    std::cout<<"Enter 2 numbers : ";
    std::cin>>a>>b;

    std::cout << "Choose an operation:\n";
    std::cout<<"1.Addition\n";
    std::cout<<"2.Subtraction\n";
    std::cout<<"3.Multiply\n";
    std::cout<<"4.Divide\n";
    std::cout<<"Enter your choice:";
    std::cin>>ch;

    if(ch==1){
        sum=a+b;
        std::cout<<sum;
    }
    else if(ch==2){
        sub=a-b;
        std::cout<<sub;
    }
    else if(ch==3){
        multiply=a*b;
        std::cout<<multiply;
    }
    else if(ch==4){
        if(b==0){
            std::cout<<"Not possible";
        }
        else{
            divide=a/b;
            std::cout<<divide;
        }
    }

    return 0;
}
