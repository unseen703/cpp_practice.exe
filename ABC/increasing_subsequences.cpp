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

// int fun( int i , int j , vector<string> &v,  vector<vector<int>> &dp){
//     if( i < 0 || j<0) return 0;
//     if( i == 0 && j == 0 && v[i][j] == '.') return 1;
//     if(v[i][j] == '*' ) return 0;
//     int up = 0;
//         if(i-1 >= 0 && v[i-1][j] != '*')
//     up = fun(i-1, j, v, dp);
//     int left = 0;
//     if( j-1>= 0 && v[i][j-1] != '*' )
//     left = fun(i, j-1, v, dp);
//     return up + left ;

// }
int main()
{

fio;
    int t = 1;
 
   int n ;
    cin >>n;
    vector<string> v;
    rep(i, 0 ,n){string s;
     cin>>s;
     v.push_back(s);
     }
int mod = 1e9+7;
 
    vector<int> pre(n +1 ,  0);
    // sort(all(v));
    // vector<vi> dp(n +1, vi( n+1, -1));
    // cout<<fun(n-1, n-1, v, dp);
        // for( int i = 0 ; i<= x ; i++) pre[i] = (i%v[0] == 0);
        pre[0] = 1;
        for(int i = 1; i< n; i++){
            if(v[0][i] == '*') pre[i] = 0;
            else pre[i] = pre[i-1 ];
        }
// for(int i = 1; i<10; i++)dp[i] = 1;
if(v[0][0] == '*' || v[n-1][n-1] == '*'){ cout<<0; return 0;}
for(int i = 1; i< n; i++){
    vi cur( n+1, 0);
    for(int j = 0; j< n; j++){

        if(i>= 0 && v[i-1][j ] == '.' )
       cur[j] = (cur[j] + pre[j])%mod;
       if(j >= 0&& v[i][j -1] == '.'){
        cur[j] =  (cur[j] + cur[j-1])%mod;
       }
    // cout<<i<<" "<<j <<" "<<cur[j]<<"\n";
        // cout<<cur[j]<<" ";
    }
       pre = cur;
}
cout<< pre[n-1];
// cout<<fun(n ,dp);

    return 0;
}