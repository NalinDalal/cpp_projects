//compiler writes own code based on some set of rules
//sort of like u don't need to define same function for diff data types or input types
//instead we generalize whole functions 

#include <iostream>
#include <string>
/*
void Print(int value)
{
    std::cout<<value<<std::endl;
}

void Print(float value)
{
    std::cout<<value<<std::endl;
}

void Print(std::string value)
{
    std::cout<<value<<std::endl;
}

int main()
{
    Print(5);
    Print("Hello!");
    Print(5.5f);
    std::cin.get();
}

    ----------------------------------------------------------
        Output:
        5
        Hello!
        5.5
    ----------------------------------------------------------
//here we defined three function which does nothing but print three data type
//but the types we had to define everytime hence we can just simply define another function to just
//have like a basic mould which has space for data type but the blanks can be filled by defining data types
//i.e. we are sort of generalizing the whole function which just takes the input each time
//it just is fill in the blanks which has evrything genralized

/*
template<typename T>    //typename is nothing but our argument here
void Print(T value)
{
    std::cout<<value<<std::endl;
}

int main()
{
    Print<int>(5); //<int> defines the data type
    Print<std::string>("Cherno");
    Print<float>(5.5f);
    std::cin.get();
}
-----------------------------------------------
output:
5
Cherno
5.5
*/
//templates just don't exist until we call them
//so if some error happens in the templates but not called then also the program runs fine

template<int N>
class Array
{
    private:
        int m_Array[N];
    public:
         int GetSize() const {return N;}   
};

int main()
{
    Array<5> array;//it creates another class and just replaces N with 5
    std::cout<<array.GetSize()<<std::endl;
    std::cin.get();
}