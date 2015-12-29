/*
 *
 *    J1K7_7
 * 
 */
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <cstring>
#include <list>
#include <map>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;
typedef long long          ll;
typedef unsigned long long ull;
typedef long double        ld;
typedef pair<int,int>      pii;
typedef pair<ll,ll>        pll;
typedef vector<int>        vi;
typedef vector<long long>  vll;
#define l(x) 		       (x << 1) + 1
#define r(x) 		       (x << 1) + 2
#define mid(l, r) 	       ((l + r) >> 1)
#define mp                 make_pair
#define pb                 push_back
#define all(a)             a.begin(),a.end()
#define pr(n)              printf("%d",n)
#define s(n)               scanf("%d",&n)
#define debug(x)	       {cerr <<#x<<" = " <<x<<"\n"; }
#define debug2(x, y)       {cerr <<#x<<" = " <<x<<", "<<#y <<" = " <<y <<"\n";}
#define ss                 second
#define ff                 first
#define m0(x) 		       memset(x,0,sizeof(x))
#define snuke(c,itr)       for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

int main()
{



    /*
     *
     *  fun  with "const" 
     *
     */


    const int i = 10;  // i is read only now
    int j = 20;  // i is read only now

    const int *a = &i; // data is constant but pointer is not
    //a++;  no error
    //*a = 111; gives error since data is constant 

    int* const b = &j; // data is const but pointer is not constant
    // b++; gives error
    // *b = 11; you can change the value as data is not constant


    const int* const c = &i; // both data and pointer is constant
    // c++; error
    // *c = 11; error


    int const* d = &i;
    //and
    const int* e = &i;
    // are the same


    /*
     * If const is left side of * then data is constant
     * If const is right side of * then pointer is constant
     *
     */

    return 0;
}

