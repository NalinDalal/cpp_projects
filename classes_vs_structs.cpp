/*
class is by default private
structs are by default public; like a public class;
*/

#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;
#define struct class

struct Player
{
    private:
        int x,y;
        int speed;

        void Move(int xa, int ya)
        {
            x+=xa * speed;
            y+=ya * speed;
        }
};

struct Vec2
{
    float x,y;

    void Add(const Vec2& other)
    {
        x +=other.x;
        y +=other.y;
    }
};

int main()
{
    Player player;
    player.Move(1, -1);
//move is declared private hence will give error
    std::cin.get();
}