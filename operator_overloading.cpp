#include <iostream>
#include <string>

struct Vector2
{
    float x,y;
    Vector2(float x, float y)
        :x(x),y(y) {} //give name before
        //x[x],y[y] {}-------doesn't works
    Vector2 Add(const Vector2& other) const{
        return Vector2(x+other.x,y+other.y);
    }
    //below expression is bit odd hence we will use this keyword
    Vector2 operator+(const Vector2& other) const{
        return Add(other);
    }
    // Vector2 operator+(const Vector2& other) const{
    //     return Vector2(x+other.x,y+other.y);
    // }

    Vector2 Multiply(const Vector2 &other) const{
        return Vector2(x*other.x,y*other.y);
    }

    Vector2 operator*(const Vector2 &other) const{
        return Multiply(other);
    }

    bool operator==(const Vector2 &other) const{
        return x==other.x && y==other.y;
    }

    bool operator!=(const Vector2 &other) const{
        return !(*this == other);
    }

};
//operators are just functions
std::ostream& operator<<(std::string& stream, const Vector2&other){//stream<<other.x<<","<<other.y;
    stream<<vector.x<<","<<vector.y;
    return stream;
}
int main()
{
    Vector2 position(4.0f,4.0f);
    Vector2 speed(0.5f,1.5f);
    Vector2 powerup(1.1f,1.1f);
    Vector2 result1=position.Add(speed.Multiply(powerup));
    Vector2 result2=position+speed*powerup;

    //if (result1.equals(result2))
    //if (result1 == result2){}
    if (result1 == result2) {
    std::cout << "Results are equal." << std::endl;
  } else {
    std::cout << "Results are not equal." << std::endl;
  }

    std::cout<<result2<<std::endl;
    std::cin.get();
}