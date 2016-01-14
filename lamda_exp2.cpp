#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

	vector<int> inp = { 1 , 5 , 2 , 3 ,4 };

	sort(inp.begin(),inp.end(),[](int i , int j ){ return i < j ; } ) ;

	for( auto x : inp)
		cout << x << " " ;



	cout << "\n";
	/***** vector with pairs ******/


	cout <<"----" << "\n";

	vector<pair < int , int > > jk;
	jk.push_back(make_pair(1,1));
	jk.push_back(make_pair(2,2));
	jk.push_back(make_pair(-1,-1));
	jk.push_back(make_pair(-1,2));


	sort(jk.begin(),jk.end());

	for(auto x : jk )
	{
		cout << x.first << " " << x.second << "\n";  
	}
	
	
	sort(jk.begin(),jk.end(), [](pair<int,int> i , pair<int,int> j ) { if ( i.first == j.first ) return (i.second > j.second); return i.first < j.first;}  )  ;

	
	cout <<"----" << "\n";
	for(auto x : jk )
	{
		cout << x.first << " " << x.second << "\n";  
	}

	return 0;
}
