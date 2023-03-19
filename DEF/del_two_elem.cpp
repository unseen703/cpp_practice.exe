
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
#define all(v) v.begin(), v.end()


main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        ll sum = 0;
        unordered_map<int, int> a;
        rep(i, 0, n)
        {
            cin >> v[i];
            sum = sum + v[i];
            a[v[i]]++;
        }
        
        ll cnt = 0;
        if ((2 * sum) % n != 0)
        {
           cout<<"0\n";
            continue;
        }
        ll nd =  (2*sum) /n;

        rep(i, 0, n)
        {
            ll y = nd  - v[i];
            if (a.count(y))
                cnt = cnt + a[y];
            if (y == v[i])
                cnt = cnt - 1;
        }
        cout<< cnt/2<<"\n";
    }
    return 0;
}