// #pragma GCC optimize("Ofast")
// #pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimization ("unroll-loops")
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define BSet_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                    \
    cout.tie(0)

typedef  long long   ll; typedef  pair<int, int>  pii;  typedef  vector<int>  vi;  typedef  vector<pii>  vpi; typedef map<int, int> mii;

// cout << "Case #" << i << ": " <<  << "\n";
// never ever use endl until asked
// In C++, comparator should return false if its arguments are equal. ref:- cf blog entry 70237
// lambda function  [](parameters) ->(return type) { return (condition / operation); }
//  resource --> generalized lambda expre. --> geeksforgeek
// a &(~(1<<i)) unsets  ith bit
//  a|(1<<i) sets ith bit
//  a&(1<<i) != 0  bit is set or not

// unique function removes duplicates and returns value of an iterator to the element that follows the last element not removed
// more-importantly it doesnt resizes your vector/container so do resize it before further uses

// following are two ways to do so
// #define remove_duplicates(v) sort(all(v));  nums.erase(unique(all(v)), v.end()); // vector will be sorted in this case;
// #define unique(v) v.resize(distance(v.begin(),unique( v.begin(),all(v) ) ) );
// or use set and store elemnent in it and assign it to a vector ( will use o(n ) extra space)

//priority_queue<long long, vector<long long>, greater<long long> > pq;

 //                                          union - find approach...........................................................................

const int N = 1e5 + 10;
// int par[N];
// int size[N];
void make(int v);
int find(int v);
void Union(int a, int b);

// ------------------------------------------------------------------------><------------------------------------------------------------------------------------------------------
const int mod = 1e9 + 7;
const long long mod_m = 1e18 ;
int bin_expo(int n, int base ); 
int bin_expo_itr(int n , int base) ;
ll bin_multiply(ll a, ll b);
bool isPrime(int n);
void fillsieve(int N);
//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
double dp[302][302][302];
int flg[302][302][302];

double fun( int x, int y , int z,int n){
    if( x <0 || y < 0 || z <0 ) return 0;
    // if( x <= 0 && y <=  0 && z <= 0 ) return 0;
    if(flg[x][y][z]) return dp[x][y][z];
    // cout<<x<<" "<<y<<" "<<z<<" ";
double ans  = 1.0000;
    flg[x][y][z] = 1;
    if( x- 1>= 0 )
    ans += fun(x-1, y+1, z, n)*((1.000*x)/n);
    if( y- 1>= 0 )
    ans += fun(x, y-1, z+1, n)*((1.000*y)/n);
    if( z- 1>= 0 )
    ans += fun(x, y, z-1,n)*((1.000*z)/n);
    int w  =  n -(x+y+z);

    // ans +=1;
     ans = ans /(1.0000 - (1.0000*w)/n );
return dp[x][y][z] = ans ;
}
//  it's gonna be alright so just don't give up yet. just one more question 
void DKK()
 { 
    int n;
    cin >>n;
memset(dp , 0, sizeof(dp));
flg[0][0][0] = 1;
// flg[0][0][0] = 1;
    vi v(n);
    unordered_map<int, int> m;
    rep( i , 0 ,n){ cin>>v[i];    m[v[i]]++;}
 
  cout<<setprecision(10)<< fun(m[3], m[2], m[1], n);

 
 }

int main()
{
 fio;
    int t = 1;

    while (t--)
    {
       DKK ();
    }

    return 0;
}
