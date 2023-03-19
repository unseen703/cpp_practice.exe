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
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        // vector<vector<int>> v;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        vi v;
        v = a;
        bool flg = true;
        sort(a.begin(), a.end());
        rep(i, 0, n)
        {
            if (a[i] != v[i])
            {
                flg = false;
                break;
            }
        }
         if(flg) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}