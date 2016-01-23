#include<iostream>
#include<cstdio>
#include<tuple>
#include<algorithm>
#include<vector>
using namespace std;

/****
 *
 *
 *  tuple<int,int,int> tup1 
 *
 *  use of get<0>(tup1) 
 * 	use of make_tuple( , , )
 *
 *  
 */
int main()
{

	/* Example 1 */
	tuple<string,int,int> student;
	get<0>(student) = "Jaskamal Kainth";
	get<1>(student) = 20;
	get<1>(student) = 1995;
	
	/* Example 2 */
	vector<tuple<int,int,int> >arr;
	cout << "Enter n: \n";
	int n; cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int a ,b , c ; cin >> a >> b >> c;
		arr.push_back ( make_tuple(a,b,c) ) ;
	}

	for(auto t : arr )
	{
		cout << get<0>(t) << " " << get<1>(t) << " "<< get<2>(t) << " \n";  
	}

	

	return 0;
}
