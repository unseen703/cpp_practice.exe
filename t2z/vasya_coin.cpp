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

vector<string> Gen_Binary(ll N)
{
    vector<string> v;
    queue<string> q;
    q.push("1");
    for (ll i = 0; i < N; i++)
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
    int a,b;
    cin >> a>>b;

if(a == 0) {
    cout<<1<<"\n";
    return;
}
else{
    cout<< a*1 + b*2 + 1<<"\n";
    return;
}
    
}


int main()
{

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
// solve();
// vector<string> v = Gen_Binary(1000000);
// cout<<v[100000];
       
    }

    return 0;
}