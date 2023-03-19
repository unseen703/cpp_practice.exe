#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    long long int a[n];
     long long int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(a[i], mx);
        mn = min(mn, a[i]);
    }
    long int d = mx - mn;
     long long int c_mx = 0, c_mn = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
            c_mx++;
        else if (a[i] == mn)
            c_mn++;
    }
    if (c_mx && c_mn)
     cout << d << " " << c_mx * c_mn;
    else if (c_mn == n || c_mx == n)
        cout << d << " " << n * (n - 1) / 2;

    return 0;
}