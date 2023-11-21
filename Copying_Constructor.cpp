//to copy data from one place to another

#include <iostream>
#include <string>

struct Vector2
{
    float x,y;
};

int main()
{
    Vector2* a=new Vector2();
    Vector2* b=a;
    //a,b point to same memory address
    b++;

    std::cin.get();
}