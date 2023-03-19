// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define rrep(i, a, b) for (int i = a; i >= b; i--)
// #define input(a, n)             \
//     for (int i = 0; i < n; i++) \
//         cin >> a[i];

// #define ll long long
// #define mp(x, y) make_pair(x, y)
// #define pb(x) push_back(x)
// #define se second
// #define fi first
// #define all(v) v.begin(), v.end()
// #define vi vector<int>
// #define pii pair<int, int>
// #define mii map<int, int>
// #define Set_Cnt(x) __builtin_popcount(x)
// #define prtNO cout << "NO\n"
// #define prtYES cout << "YES\n"
// #define el cout<<"\n";
// #define endl "\n";
// #define coutd(x,y) cout<<x<<y;
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)

// // cout << "Case #" << i << ": " <<  << endl;
// // never ever use endl until asked
// // lambda function  [](parameters) ->(return type) { return (condition / operation); }
// //  resource --> generalized lambda expre. --> geeksforgeek
// // a &(~(1<<i)) unsets  ith bit
// //  a|(1<<i) sets ith bit
// //  a&(1<<i)!= 0  bit is set or not

// void solve()
// {
//     int n;
//     cin >> n;

//     vi v(n);

//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     // int cnt = 0;
//     bool flg = true;
//     unordered_map<int, int> m;
//     rep(i, 0, n)
//     {

//         if (m[v[i]] > 0)
//         {

//             flg = false;
//         }
//         m[v[i]]++;
//     }
//     if (flg)
//     {
//         cout << (n + 1) / 2 << "\n";
//         return;
//     }
//     else
//     {
//         int ans = 0;
//         int dis = 0;

//         for (auto p : m)
//         {
//             if (p.second >= 2)
//             {
//                 ans++; // this will contribute +1 in each ans
//             }
//             else
//             {
//                 dis++; //  for dis number we have ans = (dis+1)/2;
//             }
//         }
//         cout << ans + (dis + 1) / 2<<"\n";
//         return;
//     }
//     return;
// }
// int main()
// {
//     fio;
//     int t;
//     cin >> t;
//     // t = 1;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

#define lL long long
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

// cout << "Case #" << i << ": " <<  << "\n";
// never ever use endl until asked
// lambda function  [](parameters) ->(return type) { return (condition / operation); }
//  resource --> generalized lambda expre. --> geeksforgeek
// a &(~(1<<i)) unsets  ith bit
//  a|(1<<i) sets ith bit
//  a&(1<<i)!= 0  bit is set or not

void solve()
{
    int n;

    string s;
    cin >> s;
    int cost_1 = 0;

    int cost_0 = count(all(s), '0');
    // int cost_1 = count(all(s),'0');
    n = s.length();
    // int cnt_1 = n - cost_0;
       int cur_cost = cost_0;
    int ans = cur_cost;
    int st = 0;
    int en = n - 1;


      while (s[st] == '0')
            {
                s.erase(s.begin() + st);
                // st++;
                cost_0--;
                cur_cost = max(cost_0, cost_1); // remove all zero b/w 2 1s
                ans = min(cur_cost, ans);
            }

    while (s[en] == '0')
            {
                s.erase(s.begin() + st);
                en--;
                cost_1++;
                cur_cost = max(cost_0, cost_1); // remove all zero b/w 2 1s
                ans = min(cur_cost, ans);
            }

    while (s.size() && en > st)
    {
        if (s[st] == '1')
        {
            s.erase(s.begin() + st);
            cost_1++;
            // st++;
            cur_cost = max(cost_0, cost_1);
            ans = min(cur_cost, ans);

               while (s[st] == '0')
            {
                s.erase(s.begin() + st);
                // st++;
                cost_0--;
                cur_cost = max(cost_0, cost_1); // remove all zero b/w 2 1s
                ans = min(cur_cost, ans);
            }
        }

        if (s[en] == '1')
        {
            s.erase(s.begin() + st);
            cost_1++;
            en--;
            cur_cost = max(cost_0, cost_1);
            ans = min(cur_cost, ans);

             while (s[en] == '0')
            {
                s.erase(s.begin() + st);
                en--;
                cost_1++;
                cur_cost = max(cost_0, cost_1); // remove all zero b/w 2 1s
                ans = min(cur_cost, ans);
            }
        }
       
    }
    cout << ans << endl;

    return;
}

int main()
{

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}