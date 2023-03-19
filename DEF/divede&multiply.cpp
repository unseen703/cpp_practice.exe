#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
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
        int n;
        cin >> n;
        vi v(n);
        int mx;
        rep(i, 0, n)
        {
            cin >> v[i];
        }
        bool flg = false;
        int cnt = 0;
        rep(i, 0, n)
        {
            while (v[i] % 2 == 0)
            {
                cnt++;
                v[i] /= 2;
            }
        }

        mx = *max_element(v.begin(), v.end());
        ll sum = (ll)mx * ((ll)pow(2, cnt));
        cout << sum + accumulate(v.begin(), v.end(), 0) - mx<<"\n";

    }
        return 0;

}