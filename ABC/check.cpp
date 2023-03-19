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
vector<string> generate(int n)
{
    vector<string> v;
    queue<string> q;
    q.push("1");
    // q.push("7");
    
    rep(i,0,n)
    {
        v.push_back(q.front());
        // because next 2 string will be sum of previous element either  + 4 or + 7
        
        q.push(v.back() + "0");
        q.push(v.back() + "1");
        q.pop();
    }
    return v;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    // sort(all(s));
    vi v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    int flg = -1;
    rep(i, 0, n)
    {

        if (v[i] >= k)
        {
            flg = i;
            break;
        }
        else
        {
            k -= v[i];
            cnt++;
        }
    }
    if (flg == -1)
        cout << n << endl;
    else
    {
        int z = ((v[flg] + 1) / 2);
        if (k > 0 && z <= k)
            cnt++;
        cout << cnt << endl;
    }
}
int main()
{
    fio;
    int n ;
    cin>>n;
    vector<string> v = generate(n);
    rep(i,0,n){
        cout<<v[i]<<" "<< i +1 <<endl;
    }

    return 0;
}
