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
    int a, b;
    cin >> a >> b;

    if (a == 0)
    {
        cout << 1 << "\n";
        return;
    }
    else
    {
        cout << a * 1 + b * 2 + 1 << "\n";
        return;
    }
}

int main()
{
    int sum = 0;

    int a[3][3];
    bool b[3][3];
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            cin >> a[i][j];
            b[i][j] = true;
        }
    }
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            if (a[i][j] & 1)
            {
                b[i][j] = !b[i][j];
                if (i-1 >= 0)
                {
                    b[i - 1][j] = !b[i - 1][j];
                }
                if (j-1 >= 0)
                {
                    b[i][j - 1] = !b[i][j - 1];
                }
                if (i +1< 3)
                {
                    b[i + 1][j] = !b[i + 1][j];
                }
                if (j+1 < 3)
                {
                    b[i][j + 1] = !b[i][j + 1];
                }
            }
        }
    }

    rep(i,0,3){
        rep(j,0,3){
            cout<<b[i][j];
        }
        cout<<"\n";
    }
    return 0;
}