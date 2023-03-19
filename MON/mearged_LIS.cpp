#include <iostream>
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
#define ll long long
#define DIPAK                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vi vector<int>
int main()
{
    DIPAK
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >>m ;
        vi a(n);
        vi b(m);
        rep(i, 0, n) cin >> a[i];
        rep(i, 0, m) cin >> b[i];
        int p1 = 0, p2 = 0;
        vi c(n + m);
        while (p1 < n && p2 < m)
        {
            if (a[p1] <= b[p2])
            {
                c.push_back(a[p1]);
                p1++;
            }
            else
            {
                c.push_back(b[p2]);
                p2++;
            }
        }
        if (p1 >= n && p2 < m)
        {
            while (p2 < m)
            {
                c.push_back(b[p2]);
                p2++;
            }
        }
        else if (p2 >= m && p1 < n)
        {
            while (p1 < n)
            {
                c.push_back(a[p1]);
                p1++;
            }
        }
        int count = 0;
        rep(i, 0, n + m - 1)
        {
            if (c[i] <= c[i + 1])
                count++;
            else
                count = 0;
        }
        cout<<count<<endl;;
    }
}
