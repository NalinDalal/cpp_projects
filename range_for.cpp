#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int>& v)
{
    int s=0;
    for(int x : v)
        s+=x;
    return s;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    int total = sum(numbers);
    cout << "Sum: " << total << endl;
    
    return 0;
}
/*
int sum2(vector<int>& v)
{
    int s=0;
    for(auto p=begin(v); p!=end(v);++p)
        s+=*p;
    return s;
}
*/