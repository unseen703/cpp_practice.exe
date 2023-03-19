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
       ll n, k;
        cin >> n >> k;
        k++;
        vector<ll> v(n);
        rep(i, 0, n)
        {
            int x;
            cin >> x;
            v[i] = pow(10, x);
        }
        ll ans = 0;
        rep(i, 0, n)
        {
            if (k <= 0)
                break;

            if (k >= (v[i + 1] - v[i]) / v[i] && i != n - 1)
            {
                ans += v[i]* ((v[i + 1] - v[i]) / v[i]);
                k -= (v[i + 1] - v[i]) / v[i];
                // cout << k << "_";
            }
            else if(k < ((v[i + 1] - v[i]) / v[i]) ){
                ans += k * v[i];
                k = 0;
            }
         else  if (i == n - 1 && k >0){
                ans += k * v[i];
                k = 0; 
                }
            if(k <= 0 ) break;
        }
        cout << ans << endl;
    }
}
