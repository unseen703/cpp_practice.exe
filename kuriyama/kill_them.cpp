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
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        ll Hc, Dc, Hm, Dm, w, a, k;
        cin >> Hc >> Dc >> Hm >> Dm >> k >> w >> a;
        ll r1, r2;
        bool flg = false;
        if (Hc % Dm == 0)
            r1 = Hc / Dm;
        else
            r1 = (Hc / Dm) + 1;
        if (Hm % Dc == 0)
            r2 = Hm / Dc;
        else
            r2 = Hm / Dc + 1;
        if (r2 <= r1)
            flg = true;
        
        else
        {
            ll H, D;
          
               //  cout << r1 << " " << r2 << " ";

            rep(i, 0, (k + 1))
            {
                H = Hc + i * a;
                D = Dc + (k - i) * w;
                if (H % Dm == 0)
                    r1 = H / Dm;
                else
                    r1 = H / Dm + 1;
                if (Hm % D == 0)
                    r2 = Hm / D;
                else
                    r2 = Hm / D + 1;
                // cout << r1 << " " << r2 << " ";

                if (r1 >= r2)
                {
                    flg = true;
                    break;
                }
            }}
            if (flg)
                cout << "YES\n";
            else
                cout << "NO\n";
        
    }
    return 0;
}