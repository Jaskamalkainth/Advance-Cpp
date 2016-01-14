#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

/*
 *
 * lamda expressions
 *
 */
int main()
{
	auto  square = [](int inp) { return inp * inp; } ;
	/*
	 *
	 * (auto inp) won't work in C++11 but will work in C++14
	 *
	 */
	
	cout << square(12) << "\n";
	cout << square(12) << "\n";

	return 0;
}
