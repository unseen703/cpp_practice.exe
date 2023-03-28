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
    cin.tie(0);                       \
    cout.tie(0)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef map<int, int> mii;

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

// priority_queue<long long, vector<long long>, greater<long long> > pq;

//                                          union - find approach...........................................................................

const int N = 1e5 + 10;
// int par[N];
// int size[N];
void make(int v);
int find(int v);
void Union(int a, int b);

// ------------------------------------------------------------------------><------------------------------------------------------------------------------------------------------
const int mod = 1e9 + 7;
const long long mod_m = 1e18;
int bin_expo(int n, int base);
int bin_expo_itr(int n, int base);
ll bin_multiply(ll a, ll b);
bool isPrime(int n);
void fillsieve(int N);
//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------

//  it's gonna be alright so just don't give up yet. just one more question
ll fun(int st, int en ,int flg , vector<ll> &v, vector<vector<vector<ll>>> &dp){
    if(st> en) return 0;
    // if(st == en ) return flg == 0 ? v[st]:-1*v[st];
    // if( en - st == 1) nb{if( flg ) return -1*max(v[st], v[en]); return max(v[st], v[en]);}
   if(dp[st][en][flg] != -1) return dp[st][en][flg];
    // if( st >= v.size()  || en < 0) return 0;
    // cout<<st<<" "<<en<<"\n";
     long long last1 = 0,  first1 = 0 ;
   ll   ans = 0;
    if(!flg )
    {
         first1 =  fun(st +1, en , !flg,v, dp) + v[st] ;
     last1 =  fun(st  , en -1 , !flg , v, dp) + v[en] ;
     
  ans =   max(first1 , last1) ;
     }
    else {
     first1 =  fun(st +1, en , !flg,v, dp) - v[st] ;
     last1 =  fun(st  , en -1 , !flg , v, dp) - v[en] ;
     ans = min(first1, last1);
    }
    
return dp[st][en][flg] = ans;
    
}
void DKK()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
     {   cin >> v[i]; sum += v[i];}
  vector<vector<vector<ll>>>  dp( n+1, vector<vector<ll>>(n+1, vector<ll>(2 ,-1)));
 ll ans = fun( 0 , n-1,0 ,v, dp);

   cout<< ans ;
    
}

int main()
{
    fio;
    int t = 1;

    while (t--)
    {
        DKK();
    }

    return 0;
}