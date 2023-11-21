#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void f(vector<double>& v);
struct F{
    vector<double>& v;
    F(vector<double>& vv) : v{vv} {}
    void operator()();
};

void f(vector<double>& v){

};

void F::operator()() {

}

int main()
{
    vector<double>some_vec {1,2,3,4,5,6,7,8,9};
    vector<double>vec2{10,11,12,13,14};

    thread t1{f, ref(some_vec)};
    thread t2{F{vec2}};

    t1.join();
    t2.join();

    return 0;
}