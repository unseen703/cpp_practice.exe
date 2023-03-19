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

//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------





//  it's gonna be alright so just don't give up yet. just one more question 
ll fun( int i ,int val, vector<ll> &wt, vector<ll> &v, vector<vector<ll>> &dp){
if(  val < 0 || val ==  0) return 0;
    if( i < 0 ) return 1e9;

    if( i == 0){
        if(val >= v[0]) return wt[0];
       return 0;
    }
    if(dp[i][val] != -1 ) return dp[i][val ] ;


        ll r = 0LL +  fun( i-1, val, wt, v, dp);

        ll take= 1e9;
    if(v[i] <= val){
        take = wt[i]*1LL + fun( i -1,val - v[i],wt, v, dp );

    }
    return dp[i][val] = min(r, take);
}

void DKK()
 { 
  ll n , w;
  cin >>n>>w;
vector<ll> v(n), wt(n);
vector<vector<ll>> dp(105, vector<ll>(1e5 + 5,  -1));
  rep(i , 0 , n){
    cin>>wt[i]>>v[i];
  } 
   
   ll l = 0;
   ll h = 1e5;
   cout<<fun(n-1, 40, wt,v,dp)<<"\n";
//    while( h - l >1){
   
//      ll mid = (l+h)/2;
//      cout<<mid<<"\n";
//     ll x = fun(n-1, mid,wt, v,dp);
//      if(x <= w){
//       l = mid ;
//      }
//      else{
//      cout<<x<<"\n";
//      h = mid -1;
//      }
   
//    }

for(int i = 1e5+1; i>= 0; i--){
    if(fun(n-1, i , wt, v, dp) <= w){
        cout<<i<<"\n";
        break;
    }
}
if(fun(n-1, l,wt, v,dp) <= w)
  cout<<l<<"\n";
  


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
