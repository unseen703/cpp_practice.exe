#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization ("unroll-loops")
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
 void DKK()
 { 

    int n;
    cin >>n;

    vi v(n +1, 0);
    int sum = 0;
    int mn =INT_MAX;
    rep( i , 1, n+1){
        cin>>v[i];
        sum += v[i];
        mn = min( mn, v[i]);
    }
    
    vector<int> dp (sum +1 , 0);
   

    dp[0] =1;
    set<int> s;
    int cur_sum =0;
    for(int i =1; i<= n; i++){
        cur_sum += v[i];
        for( int tar = cur_sum; tar >= v[i]; tar-- ){

            dp[tar] |= dp[tar-v[i]] ;


             if(dp[tar] == 1)
             s.insert(tar);

        }
        
    }

cout<<s.size()<<"\n";
for(auto &i:s) cout<<i<<" ";
 }

int main()
{
 fio;
    int t = 1;

    while ( t-- )       DKK ();
    

    return 0;
}
