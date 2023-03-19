#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define vi vector<int>

int main()
{
    fio int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n + 1);
        rep(i, 1, n + 1) cin >> v[i];
        bool div = true;

        for (int i = 1; i < n + 1; i++)
        {
            // int x;
            // cin >> x;
            bool flg = false;
            if (i < 23)
            {
                rep(j, 2, i + 2)
                {

                    if (v[i] % j)
                    {
                        flg = true;
                        break;
                    }
                }
            }

            else
            {
                rep(j, 2, 23)
                {

                    if (v[i] % j)
                    {
                        flg = true;
                        break;
                    }
                }

              
            }
              if (!flg)
                {
                    //    cout << div << " 1 ";
                    div = false;
                    break;
                }
                //    cout << div << " 2 ";
        }
        if (!div)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}