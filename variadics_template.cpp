#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

/*
 * Variadic templates allow fo arbitary number of arguments but also maintains  some type safety and do not require type casting. 
 *
 */

void printstuff() // base case when rest... is empty
{
	cout << "\n";  
}

template<typename t1 , typename... t2>
void printstuff(t1 first , t2... rest)
{
	cout << first << " " ;
	printstuff(rest...);
}

int main()
{

	printstuff("Jaskamal Kainth" , 20 , "Writes Beautiful Code" );

	return 0;
}
