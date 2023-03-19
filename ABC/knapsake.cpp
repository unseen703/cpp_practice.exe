// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define rrep(i, a, b) for (int i = a; i >= b; i--)

// #define prtNO cout << "NO\n"
// #define prtYES cout << "YES\n"
// #define mp(x, y) make_pair(x, y)
// #define pb(x) push_back(x)
// #define ff first
// #define ss second
// #define all(v) v.begin(), v.end()
// #define BSet_Cnt(x) __builtin_popcount(x)

// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                    \
//     cout.tie(0)

// typedef  long long   ll; typedef  pair<int, int>  pii;  typedef  vector<int>  vi;  typedef  vector<pii>  vpi; typedef map<int, int> mii;

// //------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------





// //  it's gonna be alright so just don't give up yet. just one more question 
// ll fun( int i , int w, vector<ll> &wt, vector<ll> &v, vector<vector<ll>> &dp){

//     if( i < 0 ) return 0;

//     if( i == 0){
//         if(wt[0]<= w) return v[0];
//         return 0;
//     }
//     if(dp[i][w] != -1 ) return dp[i][w ] ;


//         ll r = 0LL +  fun( i-1, w, wt, v, dp);

//         ll take= -1e8;
//     if(wt[i] <= w){
//         take = v[i]*1LL + fun( i -1, w - wt[i],wt, v, dp );

//     }
//     return dp[i][w] = max(r, take);
// }

// void DKK()
//  { 
//   int n , w;
//   cin >>n>>w;
// vector<ll> v(n), wt(n);
// vector<vector<ll>> dp(105, vector<ll>(2e5, -1));
//   rep(i , 0 , n){
//     cin>>wt[i]>>v[i];
//   } 
   
//    cout<<fun( n-1, w, wt, v, dp);


//  }

// int main()
// {
//  fio;
//     int t = 1;

//     while (t--)
//     {
//        DKK ();
//     }

//     return 0;
// }

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

typedef  long long   ll; typedef  pair<int, int>  pii;  typedef  vector<int>  vi;  typedef  vector<pii>  vpi; typedef map<int, int> mii; typedef vector<ll> vll;

//  it's gonna be alright so just don't give up yet. just one more question 
void DKK()
 { 
  
  ll n, w;
  cin>>n>>w;
  vll v(n), wt(n);
  rep( i , 0 , n){
    cin>>wt[i]>>v[i];
   
 }

  vector<vll> dp(n+1, vll(w +1, 0));
  for(int i = wt[0]; i <= w; i++)
  dp[0][i] = v[0];
  
  for(int i = 1; i < n ; i++){
    for(int j = 0; j < w+1; j++){
    	
      dp[i][j] = dp[i-1][j];
      if(j >= wt[i])
      dp[i][j] = max(dp[i][j], dp[i-1][j - wt[i]] + v[i]);
      
      
    }
  }
  cout<<dp[n-1][w]<<"\n";

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
