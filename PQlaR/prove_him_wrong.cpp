#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

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

vector<string> Gen_Binary(int N)
{
    vector<string> v;
    queue<string> q;
    q.push("1");
    for (int i = 0; i < N; i++)
    {
        v.push_back(q.front()); // because next 2 string will be sum of previous element either  + 0 or + 1
        q.push(v.back() + "0");
        q.push(v.back() + "1");
        q.pop();
    }
    return v;
}

// void solve()
// {
//     int n;
//     cin >> n;

//     deque<int> q;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         q.push_back(x);
//     }
//     int a[n+1];
//     rrep(i, n, 1)
//     {
//         int cnt = 0;
//         while (q.back() != i)
//         {
//             q.push_back(q.front());
//             q.pop_front();
//             cnt++;
//         }
//         a[i] = cnt;
//         q.pop_back();
//     }
//     rep(i, 1, n +1)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     fio;

//     int t;
//     cin >> t;
//     // t = 1;
//     while (t--)
//     {

//         // solve();

//         int n;
//     cin >> n;

//        cout<< ( 1 << n) -1 <<endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

int main()
{

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {

        int n;
        cin >> n;
        if (n <= 19)
        {
            cout << "YES\n";
            rep(i, 1, n + 1)
            {
                cout << (ll)pow(3, i - 1) << " ";
            }
            cout << endl;
        }
        else cout<<"NO\n";
    }

    return 0;
}