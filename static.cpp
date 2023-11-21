//static-----no 2 global variable with same name can't exist
#include <iostream>
struct Entity
{
    int x,y; //static
    void Print()
    {
        std::cout<<x<<", "<<y<<std::endl;
    }
};

//int Entity::x;
//int Entity::y;

int main()
{
    Entity e;
    e.x=2;
    e.y=3;

    //Entity e1= {5,8};
    /*
    ---------------------------------------------
    if i declare x,y static in struct then it is sort of public declared
    
    Errors={
        static.cpp:22:17: error: excess elements in struct initializer
    Entity e1= {5,8};
                ^
static.cpp:26:12: error: redefinition of 'e1'
    Entity e1;
           ^
static.cpp:22:12: note: previous definition is here
    Entity e1= {5,8};
           ^
2 errors generated.
    }*/
    ----------------------------------------------------------
    Entity e1;
    e1.x=5; //=== Entity::x
    e1.y=8; //=== Entity::y


    e.Print();
    e1.Print();
    
    std::cin.get();
}

/*
int main()
{
    Entity e;
    Entity::x=2;
    Entity::y=3;

    Entity e1;
    Entity::x=5;
    Entity::y=8;

    Entity::Print();
    Entity::Print();
    std::cin.get();

    return 0;
*/

/*
    static.cpp:56:13: error: invalid use of non-static data member 'x'
    Entity::x=2;
    ~~~~~~~~^
static.cpp:57:13: error: invalid use of non-static data member 'y'
    Entity::y=3;
    ~~~~~~~~^
static.cpp:60:13: error: invalid use of non-static data member 'x'
    Entity::x=5;
    ~~~~~~~~^
static.cpp:61:13: error: invalid use of non-static data member 'y'
    Entity::y=8;
    ~~~~~~~~^
static.cpp:63:13: error: call to non-static member function without an object argument
    Entity::Print();
    ~~~~~~~~^~~~~
static.cpp:64:13: error: call to non-static member function without an object argument
    Entity::Print();
    ~~~~~~~~^~~~~
*/