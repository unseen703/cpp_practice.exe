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
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            if (n == 1)
                cout << 1 << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            int i;
            for (i = 1; i <= k - 1; i++)   cout << i << " ";
            for (int j = n; j >= i; j--)   cout << j << " ";
                cout<<endl;
        }
    }
}
