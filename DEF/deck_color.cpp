#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define takein(v,n) rep(i,0,n){cin>>v[i];}

#define ll long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define Set_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    int n,q;
    cin >> n>>q;
vi v(n);
rep(i,0,n){cin>>v[i];}
vi qr(q);
rep(i,0,q){cin>>qr[i];}

        rep(i,0,q){
            
            cout<<lower_bound(all(v), q[i]) - v.begin()<<" ";
        }
    
    return 0;
}
