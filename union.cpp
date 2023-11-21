#include <iostream>

struct vector2
{
    float x, y;
};

struct vector4
{
    //float x, y, z, w;

    /*vector2 GetA()
    {
        return *(vector2*)&x; 
    }*/

    union
    {
        struct
        {
            float x, y, z, w;
        };
        struct
        {
            vector2 a, b; //a memo = x,y and b memo=z
        };
    };
};

void PrintVector2(const vector2& vector)
{
    std::cout << vector.x << ", " << vector.y << std::endl;
}

int main()
{
    vector4 vector = {1.0f,2.0f,3.0f,4.0f};
    PrintVector2(vector.a);
    PrintVector2(vector.b);
    vector.z = 500.0f;
    std::cout << "-------------------" << std::endl;
    PrintVector2(vector.a);
    PrintVector2(vector.b);
    /*
    //union example
    struct union{
    union{
        float a;
        int b;
        };
    };

    union u;
    u.a=2.0f;
    std::cout<<u.a<<" , "<<u.b<<std::endl;

    std::cin.get();
*/
    return 0;
}
