#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
	Protected:
		int a,b;
	Public:
		void show()
			{
				a=10;b=20;
				cout<<a<<ends<<b<<endl;
			}
};

class Derived:Public Base
{
	Public:
		void disp()
			{
				a=30;b=40;
				cout<<a<<endl<<b<<endl;
			}
};

void main()
{
	clrscr();
	Derived obj;
	obj.disp();
	obj.show();
	getch();
}
