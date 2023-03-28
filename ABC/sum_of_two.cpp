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


//  it's gonna be alright so just don't give up yet. just one more question 
void DKK()
 { 
   int n, k ;
   cin>>n>>k;
   vector<pii> v;
//    vi v(n);
   rep( i ,0 ,n){
    int x;

    cin>>x;
     v.pb(mp(x,i));
   }

    sort(all(v));
    int st =0;
    int en = n-1;

    while( st < en){
        if( v[st].ff + v[en ].ff == k){
            cout<<v[st].ss+1<<" "<<v[en].ss+1<<"\n";
            return;
        }

        if(v[st].ff + v[en].ff < k) st++;
        else en--;

    }

    cout<<"IMPOSSIBLE";
    
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
