#include <iostream>
using namespace std;
int main()
{
    /*
Syntax:
do
{
    c++ statements;
}while(condition)
*/

    int  i=1;
    do{
        cout<<i<<endl;
        i++;
        //i++ -> i=i+1
    }
    while(i<=40);
    //print from 1 to 40
    //if the condition is fails then also runs one time then checks condition
    return 0;
}