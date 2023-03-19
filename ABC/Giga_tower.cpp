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

bool check(int n ){
    while(n){
         if (n % 10 == 8 || n % 10 == -8 )
        
            // cout << 0 << "\n";
            return true;
        
        n/= 10;
    }
    return false;
}
void solve()
{

    int n;
    cin >> n;

    // int temp = n;
    vi v(n);
    int  m;
    for( auto & vv : v) cin>>vv;
    cin>>m;
    vi q(m);
    // for( auto &qq: q)cin>>qq;
    vi pre(n);
    pre[0 ] = v[0];
    rep( i , 1, n) pre[i ] = pre[ i-1 ] + v[i];
    rep( i , 0 , m){
int q;
cin>>q;
if( q<= pre[0] )
 {   cout<<1<<"\n";continue;;}

if(q == pre[n-1]) {cout<<n<<"\n"; continue; ;}
auto it = upper_bound(all(pre), q);
int val1 = *(it - 1);
int val2 = *it;
if(val1 == q)cout<< it - pre.begin() <<"\n";
else
    cout<< it - pre.begin()+1<<"\n";

}

    }
int main()
{
    fio;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
