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
const int N = 5e3 +1;
int dp[N][N];
    string s, t;

int fun(int i , int j ){
    if( i <0 && j<0 ) return 0;
    if( i < 0 ) return j+1;
    if( j < 0 ) return i+1;

    if(dp[i][ j] != -1) return dp[i][j];
    int ans = 1e7;
    if(s[i] == t[j]){
        // no change
         return dp[i][j]  = min(ans, fun( i-1, j-1) );
    }

            return dp[i][j] = min({fun( i-1, j ), fun(i,j-1), fun(i-1, j-1) } )+1;

}


//  it's gonna be alright so just don't give up yet. just one more question 
void DKK()
 { 
    cin >>s>>t;
//    cout<< minDistance(s, t);
   int n = s.length(), m = t.length();
memset(dp, -1, sizeof(dp));

cout<< fun( n-1, m-1);
    //     vector<vector<int>> dp(n +4, vector<int>(m+4, 0));

    // for(int i = 1; i<= n; i++)dp[i][0] = i;
    // for(int i = 1; i<= m; i++)dp[0][i] = i;

    //     for(int i = 1; i <= n ; i++){
    //         for(int j = 1 ; j <= m; j++){
    //             if(s[i-1] == t[j-1])
    //           // no change
    //             dp[i][j] =  dp[i-1][j-1] ;


    //                    else
    //            dp[i][j] = min({dp[i - 1][ j],dp[i][j - 1],dp[i - 1][j - 1]}) +1;

    //         }
    //     }
        // cout<< dp[n][m];
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
