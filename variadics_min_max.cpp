#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


/******************* variadic templates *********/
/****  min ***/
	template<typename T >
T min_ ( T a , T b )
{
	return a > b ? b : a ;  
}

	template < typename T ,  typename... Ts >
T min_( T first , Ts... last )
{
	return  min_(first, min_(last...));
}

/****** max *****/

template<typename T> 
T max_( T a , T b)
{
	return a>b ? a : b ;
}

template<typename T, typename...Ts>
T max_( T first , Ts... last)
{
	return max_(first,max_(last...));
}

int main() 
{
	cout << min_ (  1 ,-2 , 3 ) << "\n";
	cout << min_ (  1 ,-2 , 3 ) << "\n";
	cout << max_ (  1 ,-2 , 3 ) << "\n";
	return 0;
}              
