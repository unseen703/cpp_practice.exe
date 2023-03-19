#include <iostream>
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
#define ll long long
#define DIPAK                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    DIPAK
    int t;
    cin >> t;
    while (t--)
    { int n, k;
        cin >> n >> k;
        vector<pair<int, int>> d(n);
        rep(i, 0, n) cin >> d[i].first;
        rep(i, 0, n) cin >> d[i].second;
        sort(d.begin(), d.end());

        if (k < d[0].first)
        {
            cout << k << endl;
            continue;
        }
        else
        {
            for (auto p : d)
            {
                if (k >= p.first)
                    k += p.second;
                else
                    break;
            }
            }
            cout << k << endl;
        
    }

}
