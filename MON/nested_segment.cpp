#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define mp(x,y) make_pair(x,y)
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

void solve(){
     int n, m;
        cin >> n >> m;
        vector<pii> v,ans;
        mii crd;
        int wt=0;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back(make_pair(y, x));
            crd[x] = i+1;
        }
        sort(all(v));
        for (int i = 0; i < 2*n; i++)
        {
            ans.pb(mp(v[i].se , v[i].fi ));
            wt+= v[i].fi;
        }
        sort(all(ans));
        cout<<wt<<endl;
        rep(i,0,n){
            cout<<crd[ans[i].first]<<" "<< crd[ans[2*n -i -1].first ]<<endl;
        }
cout<<endl;
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
       
    }
    return 0;
}