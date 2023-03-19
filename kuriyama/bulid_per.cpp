#include <bits/stdc++.h>
#include<stdio.h>
using ll = long long;
using namespace std;
// set<ll> v;
const int N = 1e9;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define takein(v, n) \
    rep(i, 0, n) { cin >> v[i]; }

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

int main()
{
    fio;
     int t;
    // scanf("%d",&t);
    cin>>t;
    while (t--)
    {
        int a, b, n;

        cin >> n >> a >> b;
        vi v(n + 1);
        rep(i, 1, n + 1)
        {
            v[i] = i;
        }
        if (a + b > n - 2 || abs(a - b) > 1)
        {
            cout << "-1\n";
            continue;
        }
        if (a > b)
        {
            int i = n;
            while (a--)
            {
                swap(v[i], v[i - 1]);
                i -= 2;
            }
        }
        else if(b>a)
        {
            int i = 1;
            while (b--)
            {
                swap(v[i], v[i + 1]);
                i += 2;
            }
        }
        else 
        {
            int i = 2;
            while (b--)
            {
                swap(v[i], v[i + 1]);
                i += 2;
            }
        }
        rep(i,1,n+1) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
