#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(arr, n)           \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

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
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// cout << "Case #" << i << ": " <<  << endl;
// never ever use endl until asked


void solve()
{
    int n;
    cin >> n;
    vi v(n);
    vi p(n);
    // input(v, n);
    int cnt_n = 0;
    rep(i, 0, n)
    {
       
        cin >> v[i];

        if (v[i] < 0)
            cnt_n++;
        // v[i] = abs(x);
        p[i] = v[i];
    }
    sort(all(p));
    bool flg = true;
    rep(i, 0, n)
    {
        if (p[i] != v[i])
        {
            flg = false;
            break;
        }
    }
    if (flg)
        prtYES;
    else
    {
        flg = true;
        rep(i, 0, n) p[i] = abs(v[i]);
        sort(p.begin(), p.begin() + cnt_n , greater<int>());
        sort(p.begin() + cnt_n, p.end());

        rep(i, 0, n)
        {
            // cout<<p[i]<<" ";
            if (abs(v[i]) != p[i])
            {
                flg = false;
                break;
            }
        }
        if (flg)
            prtYES;
        else
            prtNO;
    }
}

int main()
{

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
