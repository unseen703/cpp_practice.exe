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
    input(v, n);
    int s = INT_MAX;
    int e = INT_MIN;

    if (n < 3)
        cout << "0\n";

    else
    {
        rep(i, 0, n)
        {
            if (i < n - 2 && v[i] == v[i + 1])
            {
                s = i + 1;
                break;
            }
        }
        rrep(i, n - 1, 1)
        {
            if (v[i] == v[i - 1])
            {
                e = i - 1;
                break;
            }
        }
        if(e >s) cout << (e - s ) << "\n" ;
        else if(e == s) cout<<1<<"\n";
        else cout << "0\n";
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
