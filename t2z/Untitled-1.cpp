#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, st, e) for (int i = st; i < e; i++)
pair<int, int> Min_Max(ll n)
{

    int mn = 9, mx = 0;
    ll i = n;
    while (i != 0)
    {
        mn = min(mn, (int)(i % 10));
        mx = max(mx, (int)(i % 10));
        i /= 10;
    }
    pair<int, int> p = {mx, mn};
    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        k--;
        while (k--)
        {
            pair<int, int> p = Min_Max(n);
            if (p.first != 0)
                n += p.first * p.second;
            else
                break;
        }
        cout << n << endl;
    }
}