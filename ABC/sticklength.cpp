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




int main()
{
 fio;
    int t = 1;

    while (t--)
    {
       int n ;
   cin>>n;
//    vector<pii> v;
   vi v(n);
   ll sum = 0;
   rep( i ,0 ,n){
    cin>>v[i];
    sum+= v[i];
   }

    int x = sum/n;

    sort(all(v));
    if( n%2){
        x = v[n/2];
    }
    else{
        x = v[n/2 -1];
    }
    ll ans = 0;
    // long long cur_sum =0;
    // cout<<x<<"\n";
   rep( i ,0 ,n){
    ans += abs(v[i]- x);
   }
    cout<<ans<<"\n";
    }

    return 0;
}
