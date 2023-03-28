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
    cin.tie(0);                       \
    cout.tie(0)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef map<int, int> mii;

// --------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------

ll dp[101][100004];
void DKK()
{
    int n, k;
    cin >> n >> k;

    vi v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    int M = 1e9 + 7;
    dp[0][0] = 1;

    for (int i = 0; i <= v[0]; i++)
        dp[0][i] = 1;

    for (int i = 1; i < n; i++)
    {
        ll sum = 0;

        for (int j = 0; j <= k; j++)
        {
            if (j > v[i])
            {
                sum = sum - dp[i-1][j - v[i] -1];
                // cout << j - v[i] - 1 << "\n";
            }

            sum = (sum + dp[i - 1][j]) % M;

            dp[i][j] = ((sum % mod) + mod) % mod;

        }
    }

    cout << dp[n - 1][k];
}

int main()
{
    fio;
    int t = 1;

    while (t--)
    {
        DKK();
    }

    return 0;
}
