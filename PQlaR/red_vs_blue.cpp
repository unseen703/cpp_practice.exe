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

string solve()
{

    int n, r, b;
    cin >> n >> r >> b;

    string s;
    int m = b + 1;
    int c = r / m;
    int d = r % m;
    // int i = 0;
    int cntb =0;
    
    rep(i, 0, m)
    {

        int x = c;
        if (d > 0)
        {
            x++;
            d--;
        }
        s.append(x, 'R');
      
        if (i != m -1 || cntb<b )
        {
            s.append("B");
            cntb++;
        }

        
    }
    return s;
}
int main()
{
    fio;
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        cout << solve();
        cout << '\n';
    }

    return 0;
}