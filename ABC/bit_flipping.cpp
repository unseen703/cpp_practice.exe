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

#define fio     ios_base::sync_with_stdio(false);     cin.tie(NULL);    cout.tie(NULL)

int palindrome(ll n)
{
    string s = to_string(n);
    int x = s.length();
    rep(i, 0, x/2)
    {
        if (s[i] != s[x - i - 1])
            return 0;
    }
    return 1;
}
void solve()
{

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        ll n;
        cin >> n;
        int a = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i != i)
                    a += palindrome(i) + palindrome(n / i);
                else
                    a += palindrome(i);
            }
        }
        cout << "Case #" << i << ": " << a << endl;
    }
}

int main()
{
    fio;
solve();
    return 0;
}