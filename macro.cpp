#include <iostream>
#include <string>

using namespace std;
//just like a pre processor

/*
#define WAIT cin.get();

int main()
{
    //cin.get();
    WAIT
    //cin.get() defines b/f main function we are just calling it
    //no need to use ";" too
}
*/
/*
#define OPEN_CURLY

int main()
{
    OPEN_CURLY
    cin.get();
}
*/
/**
int main()
{
    cout<<"Hello"<<endl;
    cin.get();
}

-----instead of this use this
*/

#if PR_DEBUG 0

#if PR_DEbUG == 1
 #define LOG(x) cout<<x<<endl;
#else
#define LOG(x)
#endif

int main()
{
    LOG("HELLO");
    cin.get();
}