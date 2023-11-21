#include <iostream>

struct Date {
    int d, m, y;

    void init(int dd, int mm, int yy) {
        d = dd;
        m = mm;
        y = yy;
    }

    void add_year(int n) {
        y += n;
    }

    void add_month(int n) {
        m += n;
        if (m > 12) {
            y += (m - 1) / 12;
            m = (m - 1) % 12 + 1;
        }
    }

    void add_day(int n) {
        d += n;
        if (d > 31) {
            m += (d - 1) / 31;
            d = (d - 1) % 31 + 1;
            if (m > 12) {
                y += (m - 1) / 12;
                m = (m - 1) % 12 + 1;
            }
        }
    }
};

Date my_birthday;

void f() {
    Date today;
    today.init(16, 10, 1996);
    my_birthday.init(30, 12, 1950);

    Date tomorrow = today;
    tomorrow.add_day(1);
    // ...
}

int main() {
    f();
    return 0;
}