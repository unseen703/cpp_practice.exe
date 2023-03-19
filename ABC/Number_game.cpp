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

void solve()
{

    int n;
    cin >> n;
    vll a, temp;

    rep(i, 0, n)
    {
        LL x;
        cin >> x;
        a.pb(x);
        temp.pb(x);
    }
    sort(all(a));
    // sort(all(temp));

    int ans = 0;
    rep(i, a[0], n + 1)
    {
        int k = i;
vll temp = a;
        int alice = 0;
        for (int j = 1; j <= i; j++)
        {
          
            int r = k - j + 1;
            int x = 0;
            // alice's turn
          auto it =   upper_bound(all(temp), r);
        
            if(it != temp.begin()) x= *(--it);
            else break;

           if(x <= r){
            
                alice++;
                temp.erase(it);
            }
            else break;

        //    bob's turn
          if(temp.size())  temp.erase(temp.begin());

           
        }
        if (alice >= k)
            ans = k;
       
    }
    cout << ans << "\n";
}

int main()
{
    fio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}