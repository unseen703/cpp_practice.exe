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

int fun( int n , vector<int> &dp){

    if( n == 0) return 0;
    if(dp[n] != -1) return dp[n];
    // cout<<n<<"\n";
    string s = to_string(n);
    int ans = INT_MAX;
    for(auto c: s){
        if( c!= '0' && n >= (c- '0'))
        ans = min(ans, fun( n - (c-'0'), dp) +1);
    }
    return dp[n] = ans;
}
int main()
{

fio;
    int t = 1;
 
   int n ;
    cin >>n;

int mod = 1e9+7;
 
    vector<int> dp(n +1 ,  -1 );
    // sort(all(v));
 
        // for( int i = 0 ; i<= x ; i++) pre[i] = (i%v[0] == 0);
        dp[0] = 0;
for(int i = 1; i<10; i++)dp[i] = 1;

cout<<fun(n ,dp);

    return 0;
}