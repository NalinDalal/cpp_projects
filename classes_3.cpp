#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;

class Player
{
    public: //must be declared
        int x,y;
        int speed;
};

//to change/move data
void Move(Player& player, int xa, int ya)
{
    player.x +=xa*player.speed;
    player.y +=ya*player.speed;
}

int main()
{
    Player player;
    player.x=5;
    /*
    classes_3.cpp:13:12: error: 'x' is a private member of 'Player'
    player.x=5;
           ^
classes_3.cpp:6:9: note: implicitly declared private here
    int x,y;
    */
    Move(player,1,-1);
    std::cin.get();
}