#include <iostream>
using namespace std;

int main()
{
    enum class Kind:char{
        name,number,end,
        plus='+',minus='-',mul='*',div='/',print=';',assign='=',lp='(',rp=')'
    };

    struct Token{
        Kind kind;
        string string_value;
        double number_value;
    };

    double expr(bool get){
        double left=term(get);

        for(;;)
        {
            switch (ts.current().kind)
            {
                case Kind::plus:
                    left+=term(true);
                    break;
                case Kind::minus:
                    left-=term(true);
                    break;
                case Kind::mul:
                    left*=prim(true);
                    break;
                case Kind::div:
                    if (auto d=prim(true))
                    {
                        left/=d;
                        break;
                    }
                    return error("divide by 0");        
                default:
                    return left;    
            }
        }
    }
    
    return 0;
}