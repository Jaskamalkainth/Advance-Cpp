#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


/************ Constexpr ****/


/****const expr let's you do stuff in compile time ******/

constexpr size_t fib(size_t n )
{
	return n <= 1 ? 1 : fib(n-1) + fib(n-2);  
}

int main()
{

	cout << fib(0) << "\n";
	cout << fib(1) << "\n";
	cout << fib(2) << "\n";
	cout << fib(3) << "\n";
	cout << fib(4) << "\n";
	

	return 0;
}
