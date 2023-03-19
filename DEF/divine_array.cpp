#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define vi vector<int>

int main()
{ fio;
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<vector<int>> v;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        v.push_back(a);
        int c = 10;
        while (c--)
        {
            unordered_map<int, int> m;
            rep(i, 0, n) m[a[i]]++;
            rep(i, 0, n)
            {
                a[i] = m[a[i]];
            }
            v.push_back(a);
        }
        int qry;
        cin >> qry;
        while (qry--)
        {
            int k, x;
            cin >> x >> k;
            if (k >= 10)
                cout << v[10][x - 1] << "\n";
            else
                cout << v[k][x - 1] << "\n";
        }
    }
    return 0;
}