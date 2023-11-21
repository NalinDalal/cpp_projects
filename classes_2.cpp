#include <iostream>
/*
class X{
    private:
        int m;
    public:
        X(int i=0):m{i};

        int mf(int i){
            int old=m;
            m=i;
            return old;
        }
};

X var {7};

int user(X var, X* ptr){
    int x=var.mf(7);    //access using "."
    int y=ptr->mf(9);   //access using "->"
    int z=var.m;        //error:can't access private data member
}
*/

struct Date{
    int d,m,y;
};
void init_date(Date&d, int, int, int);
void add_year(Date& d, int n);
void add_month(Date& d, int n);
void add_day(Date& d,int);

Date my_birthday;

void f() {
    Date today;
    today.init(16,10,1996); 
    my_birthday.init(30,12,1950);

    Date tomorrow = today; 
    tomorrow.add_day(1); 
    // ...
}

void Date::init(int dd, int mm, int yy) {
    d = dd;
    m = mm;
    y = yy;
}
