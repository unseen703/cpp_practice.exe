#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)




#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)




void solve()
{
    int n;
string s;
vector<int> v;
    cin >> n;
    cin >> s;
    int cnt = 0;
    v.clear();
    int  j = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0'){
          v.push_back(i);
           }
           
    }
     for (int i = 0; i < (int)v.size() - 1; ++i)
    {
        if (v[i + 1] - v[i] - 1 <= 2)
            cnt += 3 - (v[i + 1] - v[i]);
    }
    cout << cnt << "\n";
}

int main()
{ fio;

    int t;
    cin >> t;
    
    while (t--)
        solve();

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// const int N = 2e5 + 5;
 
// int n;
// string s;
// vector<int> v;
 
// void solve() {
//     v.clear();
//     cin >> n >> s;
//     int ans = 0;
//     for (int i = 0; i < n; ++i) {
//         if (s[i] == '0') v.push_back(i);
//     }
//     for (int i = 0; i < (int)v.size() - 1; ++i) {
//         if (v[i + 1] - v[i] <= 2) ans += 2 - (v[i + 1] - v[i]) + 1;
//     }
//     cout << ans << '\n';
// }
 
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t; cin >> t;
//     while (t--) solve();
// }