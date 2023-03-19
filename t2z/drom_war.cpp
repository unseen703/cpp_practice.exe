#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(arr, n)           \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

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
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// cout << "Case #" << i << ": " <<  << endl;
// never ever use endl until asked

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int k;
//     cin >> k;
//     char sp[k];
//     input(sp, k);

//     vi v;
//     rep(i, 0, n)
//     {

//         if (count(sp, sp + k, s[i]) != 0)
//         {
//             v.pb(i);
//         }
//     }
//     if (v.size() == 0)
//         cout << 0 << "\n";
//     else
//     {
//         int max_p = v[0];
//         rep(i, 1, v.size())
//         {
//             max_p = max(max_p, v[i] - v[i - 1]);
//         }
//         cout << max_p<< "\n";
//     }
// }

int main()
{

    int t;
    cin >> t;
    cout<< to_string(t);
    // t = 1;
    // while (t--)
    // {
    //     solve();
    // }

    return 0;
}
