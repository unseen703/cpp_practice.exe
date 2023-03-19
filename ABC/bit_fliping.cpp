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

void solve()
{

    int n, r, b;
    cin >> n >> r >> b;

    int x = r * 1.0 / (b + 1) + 0.5 +1;
     string s= "";

    rep(i, 1, n+1)
    {
       
        {
            if (i%x == 0 )
            {
                if(count(all(s),'B' ) == b) break;
                s.append("B");
                // cout << 'B';
            }
            else
            {   if(count(all(s),'R' ) == r) break;
                s.append("R");
                // cout << 'R';
            }
        }
    }
    if(count(all(s),'R') < r){
        s.append("R", r - count(all(s),'R')   );
    }
    cout<<s;
}
int main()
{
    fio;
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
        cout << '\n';
    }

    return 0;
}