#include <iostream>
using namespace std;

int main()
{
    int** array=new int*[50];
    int** a2d=new int*[50];

    array[0]=nullptr;
    cin.get();

    return 0;
}

void print_m3s(int m[3][5])
{
    for(int i=0;i!=3;i++)
    {
        for(int j=0;j!=5;j++)
        {
            cout<<m[i][j]<<"\t";
            cout<<'\n';
        }
        cout<<endl;
    }
}