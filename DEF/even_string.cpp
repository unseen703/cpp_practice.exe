#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define takein(v, n)  rep(i, 0, n) { cin >> v[i]; }

#define ll long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define Set_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    int k;
    cin >> k;

    while (k--)
    {
        string s;
        cin >> s;

        int m = 0;
        vector<bool> cnt(27,false);
         int n = s.size();
        for( auto &i : s)
        {
            if (cnt[i - 'a'])
            {
                m += 2;
               cnt =vector<bool>(27,false);
            }
            else{
                cnt[i - 'a'] = true;
            }
        }
        cout<<(n-m)<<"\n";
    }
    return 0;
}
