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
 
   int n , x;
    cin >>n>>x;
 
    vi v(n );
    rep( i , 0 , n) cin>>v[i];
int mod = 1e9+7;
 
    vector<int> pre(x+1 ,  0 );
    sort(all(v));
 
        for( int i = 0 ; i<= x ; i++) pre[i] = (i%v[0] == 0);
 
        for( int i = 1; i < v.size() ; i++){
            vi cur(x+1, 0);
            for( int j = 0; j<= x; j++){
 
                int take = 0;
                if( j >= v[i])
                take  = cur[j-v[i]];
                int not_take = pre[j];
 
                cur[j] = (take + 0LL + not_take)%mod;
            }
            pre = cur;
        }
 
 
        cout<< pre[x];
 
    return 0;
}