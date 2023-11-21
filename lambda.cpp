#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//[],(),{}: lambda expression
	//[]: capture list
	//(): parameter list
	//{}: function body
int main()
{
	struct something
	{
		void operator() (int x) {
			cout << x << "\n";
		}
	};

	//[](int x) {std::cout << x << "\n";}(5); //lambda expression
/*
	[] (int x)
	{
		if(x%2==0)
			std::cout<<x<<" is even\n";
		else
			std::cout<<x<<" is odd\n";
	}
*/
//	for_each(v.begin(),v.end(),[](int x) {std::cout << x << "\n";}); //iterate thru vector

//	system("pause>nul");

	/*
	int x=5;
	int y=10;

	auto add=[&x,&y]() -> int {return x+y;}; //lambda expression
	cout<<"The Sum of x and y is:"<<add()<<endl;
*/
	vector<int> v{2,3,4,7,14,23}; //vector declared
	for_each(v.begin(),v.end(),[] (int x)
	{
		if(x%2==0)
			cout<<x<<" is even\n";
		else
			cout<<x<<" is odd\n";
	});
	/*
	Output:
	2 is even
	3 is odd
	4 is even
	7 is odd
	14 is even
	23 is odd
	78976 is even*/

	return 0;
}
