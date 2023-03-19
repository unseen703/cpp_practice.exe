// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define ll long long
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// #define vi vector<int>
// #define all(v) v.begin(), v.end()

// int main()
// {
//     fio;

//     int n;
//     cin >> n;
//     vi v(n);
//     set<int> s;
//   unordered_map<int,pair<int,int>> a;
//     int cnt = 0;
//     rep(i, 0, n)
//     {
//         cin >> v[i];
//         s.insert(v[i]);
//         a[v[i]].first = -1;
//         a[v[i]].second = -1;

//     }
//     int m = s.size();
//     // vector<pair<int,int>> a(1e5 +1,pair<int,int>{-1, -1});
  
//     rep(i, 0, n)
//     {
//         if (a[v[i]].first == -1)
//         {
//             a[v[i]].first = 0; /// common difference
//             a[v[i]].second = i; /// pre postion of an elem.
//         }
//         else
//         {
//             if (i - a[v[i]].second == a[v[i]].first || a[v[i]].first == 0)
//             {
//                 a[v[i]].first = i - a[v[i]].second;
//                 a[v[i]].second = i;
//             }
//             else if (a[v[i]].first == INT_MIN)
//                 continue;
//             else
//             {
//                 cnt++;
//                 a[v[i]].first = INT_MIN;
//             }
//         }
//     }
//     cout << m - cnt << "\n";
//     for (auto t : s)
//     {
//         if (a[t].first != INT_MIN)
//             cout << t << " " << a[t].first << "\n";
//     }

//     return 0;
// }

                                                               /*// using vector of vector//*/
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define ll long long
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// #define vi vector<int>
// #define all(v) v.begin(), v.end()

// int main()
// {
//     fio;

//     int n;
//     cin >> n;
//     vi v(n);
//     set<int> s;
//     int cnt = 0;
//     rep(i, 0, n)
//     {
//         cin >> v[i];
//         s.insert(v[i]);
//     }
//     int m = s.size();
//     vector<vi> a(1e5 +1, vector<int>(2, -1));
//     rep(i, 0, n)
//     {
//         if (a[v[i]][0] == -1)
//         {
//             a[v[i]][0] = 0; /// common difference
//             a[v[i]][1] = i; /// pre postion of an elem.
//         }
//         else
//         {
//             if (i - a[v[i]][1] == a[v[i]][0] || a[v[i]][0] == 0)
//             {
//                 a[v[i]][0] = i - a[v[i]][1];
//                 a[v[i]][1] = i;
//             }
//             else if (a[v[i]][0] == INT_MIN)
//                 continue;
//             else
//             {
//                 cnt++;
//                 a[v[i]][0] = INT_MIN;
//             }
//         }
//     }
//     cout << m - cnt << "\n";
//     for (auto t : s)
//     {
//         if (a[t][0] != INT_MIN)
//             cout << t << " " << a[t][0] << "\n";
//     }

//     return 0;
// }
                                                   //// array of array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define vi vector<int>
#define all(v) v.begin(), v.end()

int main()
{
    fio;

    int n;
    cin >> n;
    vi v(n);
    set<int> s;
    int cnt = 0;
    rep(i, 0, n)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    int m = s.size();
  int a[100002][2];
  fill(&a[0][0], &a[0][0] + 200004, -1);
    rep(i, 0, n)
    {
        if (a[v[i]][0] == -1)
        {
            a[v[i]][0] = 0; /// common difference
            a[v[i]][1] = i; /// pre postion of an elem.
        }
        else
        {
            if (i - a[v[i]][1] == a[v[i]][0] || a[v[i]][0] == 0)
            {
                a[v[i]][0] = i - a[v[i]][1];
                a[v[i]][1] = i;
            }
            else if (a[v[i]][0] == INT_MIN)
                continue;
            else
            {
                cnt++;
                a[v[i]][0] = INT_MIN;
            }
        }
    }
    cout << m - cnt << "\n";
    for (auto t : s)
    {
        if (a[t][0] != INT_MIN)
            cout << t << " " << a[t][0] << "\n";
    }

    return 0;
}