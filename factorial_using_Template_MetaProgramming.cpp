#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

/********
 *
 * 
 * We can get the compiler to do some of the work at compile time that would normally be  done at runtime through fancy template techniques
 *
 */


/****** Incomplete Declaration ******/
template <size_t n > struct fact;

/****** Base case ******/
template <>
struct fact<0>
{
	const static auto value = 1 ;
};

/****** Recursive defination ****/

template < size_t n >
struct fact
{
	const static auto value = n * fact < n-1 >::value;
};
// Same recursive math but it's done at compile time 


int main()
{

	cout << fact<5>::value<< "\n";
	

	return 0;
}
