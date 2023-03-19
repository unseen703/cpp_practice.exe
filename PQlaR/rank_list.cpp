#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

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

    bool cmp(pii p1,pii p2)
    {
        if(p1.first!=p2.first)
        {
            return p1.first>p2.first;
        }
        else
        return p1.second>p2.second;
    }

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pii> m;
    // map<pii,int> s;
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        m.pb(mp(x, y));
    }
    int cnt = 0;
    // sort(all(m),c);
    sort(all(m),[](pii x,pii y){ return (x.first > y.first) || (x.first == y.first && x.second > y.second);});
    
    for (auto p : m)
    { cout<<p.fi<<" "<<p.se<<endl;
        if (p == m[n - k])
            cnt++;
    }
    // cout << cnt;
}

int main()
{

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}