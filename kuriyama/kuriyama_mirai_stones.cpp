#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;
#define rep(i, st, e) for (ll i = st; i < e; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n;
    ll a[n+1], b[n +1];
    a[0] = b[0] = 0;
    rep(i, 1, n+1)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n+1);
    rep(i,1,n+1){
        a[i]+=a[i-1];
        b[i] += b[i-1];
    }
    cin >> m;
    while (m--)
    {
        ll x, y, z;
        cin >> x;
        if (x == 1)
        { 
            cin >> y >> z;
            cout <<a[z] - a[y-1]<<endl;
        }
        else if (x == 2)  
        {
             cin >> y >> z;
         cout <<b[z] - b[y-1]<<endl;

        }
    }

    return 0;
}