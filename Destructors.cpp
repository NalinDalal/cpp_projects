#include <iostream>

using std::cout, std::cin, std::endl;

class Entity
{
    public:
        float X, Y;

        Entity()
        {
            X=10.0f; 
            Y=5.0f;
            cout<<"Created Entity!"<<endl;
        }

//to declare destructor just like--------   ~class_name
        ~Entity()
        {
            cout<<"Destroyed Entity!"<<endl;
        }

        void Print()
        {
            std::cout<<X<<","<<Y<<std::endl;
        }
};

void Function()
{
    Entity e;
    e.Print();
    e.~Entity();//to call destructor
}

int main()
{
    //Destructor to uninitialize the objects;gets called when object is destroyed

    //cout<<"hi"<<endl;
/* 
    Entity e;
    e.Print();
*/

//to call whole function defined elesewhere
    Function();
    cin.get();
    return 0;
}