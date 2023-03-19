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

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    int mx1 = -3, mx2 = -4;
    rep(i, 0, n)
    {
        cin >> v[i];
        if (v[i] >= mx1)
        {
            mx2 = mx1;
            mx1 = v[i];
        }
        else if (v[i] > mx2)
        {
            mx2 = v[i];
        }
    }
    cout<<mx1<<" " <<mx2;
    if (n == 1)
    {
        if (v[0] > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    else
    {
    
        if (mx1 - mx2 >= 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

int main()
{
 fio;
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}