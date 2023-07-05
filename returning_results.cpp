#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void f(const vector<double>& v, double* res);

class F{
public:
    F(const vector<double>& vv,double *p):v(vv), res(p) {}
    void operator()();
private:
    const vector<double>& v;
    double* res;
};

void f(const vector<double>& v, double* res){

}

void F::operator()()
{
    f(v, res);
}

int main()
{
    vector<double> some_vector;
    vector<double> vec2;
    //...

    double res1;
    double res2;

    thread t1;{f,some_vector, &res1;}; //f(some_vec,&res1)-->execute in seperate thread
    thread t2;{f;{vec2,&res2;}};

    t1.join();
    t2.join();

    cout<<res1<<' '<<res2<<'\n';
    return 0;
}