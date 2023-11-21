#include <iostream>

class Entity
{
    public:
        float X, Y;

        Entity()
        {
            X=0.0f;
            Y=0.0f;
        }

      /** void Init()
        {
            X=0.0f;
            Y=0.0f;
        }*/
        Entity(float x,float y)
        {
            X=x;
            Y=y;
        }

        void Print()
        {
            std::cout<<X<<","<<Y<<std::endl;
        }
};
/*
Constructor:
it's a method that gets called
no return type
same as class name
*/

int main()
{
    /*Entity e;
    e.Init();
    //manually printting
    std::cout<<e.X<<std::endl;
    --------------------------------------------
    Output:
    1.4013e-45,2.3207e-37
    ------------------------------------------------
    e.Print();
    return 0;
    */
/*
    Entity e;
    //e.Init();
    std::cout<<e.X<<std::endl;
    e.Print();

    //Output:0
//0,0
    */

    Entity e(10.0f, 5.0f);
    e.Print();
    //output:10,5
    std::cin.get();
}