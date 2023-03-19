
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


const int N = 1e5 +1;

 vector<ll> g[N];

//  it's gonna be alright so just don't give up yet. just one more question 
ll fun( ll i ,vector<ll> &dp){

    if(dp[i] != -1 ) return dp[i] ;

 ll ans = 0;
//  if(g[i].size() == 0) return dp[i] = 1;
  for(auto &ch:g[i]){
    
    ans = max(ans, fun( ch , dp) +1);
    }
    // ans++;
    cout<<i<<" "<<ans<<"\n";
  return  dp[i] = ans;
       
}

void DKK()
 { 
  int n , m;
  cin >>n>>m;

 
  
  rep( i , 0 , m){
    int x, y;
    cin>>x>>y;
  g[x].push_back(y);
  
  }
vector<ll> dp(1e5 +1,-1);
ll ans = 0 ;
  for(ll i = 1; i <= n; i++)
   {
    ll x =  fun( i , dp);
     ans = max(ans,x);
   
   }
              
  
              cout<< ans;


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
