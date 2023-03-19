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
    int n;
    cin >> n;

    vi s(n);

    for (int i = 0; i < n; i++)
        cin >> s[i];
    int j = 0, po = 0;
    // int cnt_mn = 0, pos2 = 0;
    while (j < n and s[j] <= s[j + 1])
    {
        j++;
    }
    po = j;
    while (po < n and s[po] >= s[po + 1])
    {
        po++;
    }
// cout<< j << " " << po;
 vi v =s;

if(po != n)  po = po +1;
            sort(v.begin() + j, v.begin() + po  );
            sort(all(s));
            rep(i, 0, n)
            {
                // cout << v[i] << " " << s[i] << endl;
                if (s[i] != v[i])
                {
                    cout << "no";
                    return;
                }
            }
            cout << "yes\n";

                if(j == n && po == n )cout << 1 << " " << 1;
                else cout << j +1 << " " << po;
    
  
}

int main()
{
    fio;

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}