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
#define si set<int>
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

void solve()
{
    int n;
    cin >> n;
    si s;
    rep(i, 1, n + 1)
    {
        s.insert(i);
    }
    vi r;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if (s.find(x) != s.end())
            s.erase(x);
        else
        {
            r.pb(x);
        }
    }
    sort(all(r), greater<int>());
    bool cnt = 0;
    for (auto &m : r)
    {

        auto it = s.end();
        it--;
        int ctg = (*it);
        if (ctg > (m - 1) / 2)
        {
            cnt = true;
            break;
        }
        s.erase(it);
    }
    if (cnt)
    {
        cout << "-1\n";
    }
    else
    {
        cout << r.size() << '\n';
    }
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