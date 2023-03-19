#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n;
    cin>>n;
    if (n & 1)
    {
        cout << 0<<"\n";
        
    }
    else
    {
        int x = n >> 1;
        long long ans =1;
        long long m = 998244353;
        for (int i = 1; i <= x; i++)
        {
            ans = (((ans % m) * (i % m)) % m);
        }
        cout<<(((ans % m) * (ans % m)) % m)<<"\n";
    }
}

int main()
{
    fio;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
