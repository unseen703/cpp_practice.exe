#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define vi vector<int>

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{ fio;
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    // ll x = 19;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vi v;
    int j = 0;
    int i = 0;

    while (i < m || j < n)
    {
    //    if(i>= m && j>=n   ) break;
        if ( i == m  || j<n && a[j] <= b[i])
        {
            v.push_back(a[j]);
            j++;
        }
        else 
        {
            v.push_back(b[i]);
            i++;
        }
    }
    rep(i, 0, v.size())
    {
        cout << v[i] << " ";
    }
    return 0;
}
// }