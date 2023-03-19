#include <iostream>
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
#define ll long long
#define DIPAK  ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{  DIPAK
    int n, b;
    cin >> n >> b;
    vector<ll> v(n);
    vector<pair<ll, ll>> d(b);
    rep(i, 0, n)   cin >> v[i];
    rep(i, 0, b)  cin>>d[i].first >>d[i].second;

    sort(d.begin(), d.end());
    rep(i, 1, b) d[i].second += d[i - 1].second;

    for (int i = 0; i < n; i++)
    {
        if (v[i] < d[0].first)
            cout << '0' << " ";
        else
        {
            int lo = 0, hi = b - 1;
            while (hi - lo > 1)
            {
                int mid = (hi + lo) / 2;
                if (v[i] >= d[mid].first)
                    lo = mid;

                else
                    hi = mid - 1;
            }
            if (d[hi].first <= v[i])
                cout << d[hi].second << " ";

            else
                cout << d[lo].second << " ";
        }
    }
}
