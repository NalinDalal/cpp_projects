#include <iostream>
using namespace std;
int* find(int* first, int* last, int v)
{
    while (first!=last && *first!=v)
        ++first;
return first;
}

void g(int* p, int* q){
    int* pp = find(p, q, "x");
}
int main(){
    return 0;
}