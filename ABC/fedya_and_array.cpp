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
  
  ll x, y;

  cin>>x>>y;
  vector<int> ans;
  for(int i = x; i >= y ; i--){
    // cout<<i<<" ";
    ans.pb(i);
  }

for(int i = y+1; i <x; i++){
    // cout<<i<<" ";
    ans.pb(i);
}
cout<<ans.size()<<'\n';
for(auto &i: ans){
    cout<<i<<" ";
}
cout<<"\n";
}

int main()
{
 fio;
    int t = 1;
cin>>t;
    while (t--)
    {
       DKK ();
    }

    return 0;
}
