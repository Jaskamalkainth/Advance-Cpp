#include<iostream>
#include<cstdio>
#include<algorithm>
#include<unordered_map>
using namespace std;

/*
 *
 *  unordered_map 
 *
 *
 */

int main()
{
	/*** insert() ***/

	unordered_map<string,int> jk_map;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		string key; int val; 
		cin >> key >> val;
		jk_map.insert(make_pair(key,val));
	}
	// inserted in no order at all ( unordered_map :P )
	// Don't wonder if your input is:
	// a 1 
	// b 2
	// and the output can be:
	// b 2 
	// a 1
	for(auto ele: jk_map)
	{
		cout << ele.first << " " << ele.second << "\n";
	}
	
	
	/****************** mymap.count() returns 1 if element is present and returns 0 if its not. ***********/
	/*
	 *  Complexity: linear 
	 */
	
	unordered_map<string,int> mymap = { {"Tourist",3999} , {"JK",4000} , {"j1k7_7",9999} };

	for( auto x: { "life" , "is" , "fun" ,"JK" , "Tourist", "j1k7_7" } )
	{
		if( mymap.count(x) == 1 )
		{
			cout << "mymap has " << x << "\n";
		}
		else
		{
			cout << "mymap does'nt have " << x << "\n";
		}
	}


	/******** mymap.found(key) returns the iterator to the key if found else iterator to the end of the map ***/
	/*
	 * Complexity: Average: O(1)
	 * 			   Worst  : O(n)
	 */
	unordered_map<string,int>::const_iterator it = mymap.find("JK");
	if(it == mymap.end() )
	{
		cout << "Not found " <<"\n";
	}
	else
	{
		cout <<it->first << " found and has a value " << it->second <<"\n";  
	}

	return 0;
}
