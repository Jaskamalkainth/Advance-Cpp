#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
/*
 *
 *
 * This will give Error because of ambiguity ( we are using namespace std and in that we have our standard "max" function. so compiler is confused which "max" to used. 
 *
 *
 *
template<typename T>
inline T const max ( T a , T b )
{
	return ( a > b ) ? a : b ;  
}
*/	
	
/*
 *
 * TEMPLATES for MAX , MIN , EQUAL 
 *
 */


	template<typename T>
inline T const &max ( T &a , T &b ) 
{
	return ( a > b ) ? a : b ;   
}
	
	
	template<typename T>
inline T const &min ( T &a , T &b )
{
	return ( a < b ) ? a : b ;
}

	template<typename T>
inline T const &equal ( T &a , T &b )
{
	return ( a == b );  
}


/*
 *
 *  Class Templates
 *
 */

template<class T>
class student
{
	public:
		T x , y , z;
};


int main()
{

	cout << max ( 5 , 6 ) << "\n";
	cout << max ( 5.1 , 62.01 ) << "\n";
	cout << min( 5, 6 ) << "\n";


	student<int> st1 ;
	st1.x = 1;
	st1.y = 2;
	st1.z = 3;

	student<string> st2;
	st2.x = "JK";






	return 0;
}
