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
    string s;
    cin >> s;
    if (s[s.length() - 1] != 'B')
    {
        cout << "NO\n";
        return;
    }
    else if (count(all(s), 'B') <= count(all(s), 'A'))
    {
        int cnA = 0, cnB = 0;
        rep(i, 0, s.length())
        {
            if (s[i] == 'A')
                cnA++;
            else
                cnB++;
            if (cnB > cnA)
            {
                prtNO;
                return;
            }
        }
        prtYES;
        return;
    }
    prtNO;
    return;
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