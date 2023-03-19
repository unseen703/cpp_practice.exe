// hey there you yes, you who is doubting himself again and again
// let me tell you it's gonna be alright so just don't give up yet. just one more question
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
// #define prt(x,y) cout << x<<" "<<y<<"\n"
#define prt(x) cout << x << "\n"

#define LL long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<LL>
#define vpi vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define mll map<LL, LL>
#define BSet_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
// const int N = 5e5;
// vector<int> g[N];

const int N = 5e5 + 2;
int par[N];
int sz[N];
void make(int v)
{
    par[v] = v;
    sz[v] = 1;
}
int find(int v)
{
    if (par[v] == v)
        return v;
    return par[v] = find(par[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
        // if(a == 2 && b == 4 )cout<<sz[a]<<" check "<<sz[b]<<"\n";
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
        // sz[b] = sz[a];
        // if(a == 2 && b == 4 )cout<<sz[a]<<" check "<<sz[b]<<"\n";
    }
}
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<vi> v(m);
    rep(i, 0, m)
    {
        int x;
        cin >> x;
        rep(j, 0, x)
        {
            int y;
            cin >> y;
            // make(y);
            v[i].pb(y);
        }
    }
    rep(i , 1, n+1){
        make(i);
    }
    rep(i, 0, m)
    {
        int pre = INT_MIN;
        for (auto k : v[i])
        {
            if (pre == INT_MIN)
            {
                pre = k;
            }
            else
            {
                Union(pre, k);
                pre = k;
            }
        }
    }
    rep( i , 1, n+1){
        int x = find(i);
        cout<<sz[x]<<" ";
    }
}

int main()
{
    fio;
    int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}
