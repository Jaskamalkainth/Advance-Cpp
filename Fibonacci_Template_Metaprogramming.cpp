#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

// Incomplete declaration
template< size_t n > 
struct fib;

// Base cases
template<>
struct fib<0>
{
	const static auto value = 1;  
};
template<>
struct fib<1>
{
	const static auto value = 1;
};

// Recursive Declaration

template<size_t n >
struct fib 
{
	const static auto value = fib<n-1>::value + fib<n-2>::value;  
};

int main()
{
	/***** Static assert works at compile time ******/
	// cool eh! ? ;)
	static_assert( fib<5>::value == 8 , "compile time errr");

	cout << fib<3>::value << "\n";
	cout << fib<4>::value << "\n";
	cout << fib<5>::value << "\n";
	cout << fib<6>::value << "\n";


	return 0;
}
