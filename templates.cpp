#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;


/** This will give Error because of ambiguity ( we are using namespace std and in that we have our standard "max" function. so compiler is confused which "max" to used. *****
  template<typename T>
  inline T const max ( T a , T b )
  {
  return ( a > b ) ? a : b ;  
  }
  */	

/******* TEMPLATES for MAX , MIN , EQUAL *********/

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


/**********  Class Templates ***********/

template<class T>
class student
{
	public:
		T x , y , z;
};


/********** Template with 2 different typenames *******/

template<typename T1 , typename T2>
struct simplePair
{
	T1 f;
	T2 s;
	simplePair(T1 a , T2 b ) { f = a ; s = b ; };
};


/********  Templates with a non - type ********/ 

template < size_t num_of_times >
void printit(const string& str)
{
	for(int i = 0 ; i < num_of_times; i++)
		cout << str << "\n";
}


int main()
{
	/*********Basic Template ************/
	cout << max ( 5 , 6 ) << "\n";
	cout << max ( 5.1 , 62.01 ) << "\n";
	cout << min( 5, 6 ) << "\n";

	/********* Class template *********/
	student<int> st1 ;
	st1.x = 1;
	st1.y = 2;
	st1.z = 3;

	student<string> st2;
	st2.x = "JK";



	/********* Using two typenames **********/
	simplePair <string , int> pair1 ("Lemon" , 10 );

	cout << pair1.f << " | " << pair1.s << "\n";



	/********** Templates for a non - type ***********/
	printit<5>("J1K7_7");

	return 0;
}
