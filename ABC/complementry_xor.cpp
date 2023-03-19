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

// cout << "Case #" << i << ": " <<  << "\n";
// never ever use endl until asked
// In C++, comparator should return false if its arguments are equal. ref:- cf blog entry 70237
// lambda function  [](parameters) ->(return type) { return (condition / operation); }
//  resource --> generalized lambda expre. --> geeksforgeek
// a &(~(1<<i)) unsets  ith bit
//  a|(1<<i) sets ith bit
//  a&(1<<i) != 0  bit is set or not

// unique function removes duplicates and returns value of an iterator to the element that follows the last element not removed
// more-importantly it doesnt resizes your vector/container so do resize it before further uses

// following are two ways to do so
// #define remove_duplicates(v) sort(all(v));  nums.erase(unique(all(v)), v.end()); // vector will be sorted in this case;
// #define unique(v) v.resize(distance(v.begin(),unique( v.begin(),all(v) ) ) );
// or use set and store elemnent in it and assign it to a vector ( will use o(n ) extra space)

// priority_queue<long long, vector<long long>, greater<long long> > pq;

//                                          union - find approach...........................................................................
/*
const int N = 1e5 + 10;
int par[N];
int size[N];
void make(int v)
{
    par[v] = v;
    size[v] = 1;
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
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        par[b] = a;
        size[a] += size[b];
    }
}*/
// ------------------------------------------------------------------------><------------------------------------------------------------------------------------------------------
// const int mod = 1e9 + 7;
// const long long mod_m = 1e18 ;
// int bin_expo(int n, int base ){ if(n== 0) return 1; int ans = 1; ans  = bin_expo(n/2, base)%mod; if(n&1) return (((ans*1LL*ans)%mod)*1LL*base )%mod; return (ans*ans)%mod; }
// int bin_expo_itr(int n , int base){ int ans = 1; while(n){ if(n&1){ ans = (ans*1LL*base)%mod;} base = (base*1LL*base)%mod; n>>=1; } return ans; }
// // for mod  ~~ 1e18;
// LL bin_multiply(LL a, LL b){ LL ans = 0; while(b){ if(b&1) ans = (ans+a )%mod; a = (a+a )%mod; b>>=1;} return ans;}

// vi lev, vis;
// bool Is_valid( int ch, int m ){
//     if( ch <= 0 || ch > m*2 +1 ) return false;
//     return true;
// }
// int bfs(int n , int m )
// {

//     lev[n] = 0;
//     vis[n] = 1;

//     queue<int> q;
//     q.push(n);
//     while (!q.empty())
//     {
//         int v = q.front();
//     //   cout<<v<<" /";
//      q.pop();

//       int ch = v*2;

//         if(Is_valid(ch,m )){
//         if( !vis[ch]){
//               q.push(ch);
//                 vis[ch] = 1;
//                 lev[ch] = lev[v] + 1;
//         }
// }

//      ch = v - 1;
//         if(Is_valid(ch,m )){
//         if( !vis[ch]){
//               q.push(ch);
//                 vis[ch] = 1;
//                 lev[ch] = lev[v] + 1;

//         }
// }

//         if (lev[m] != INT_MAX)
//         {
//             break;
//         }
//     }
//     return lev[m];
// }
bool isPrime(int n)
{
    rep(i, 2, sqrt(n) + 1)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
bool check(string &a, string &b)
{
    if (a == b)
        return true;
    rep(i, 0, a.size())
    {
        if (a[i] != b[i])
            continue;
        else
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<pii> ans;
    string a, b;
    cin >> a >> b;

    if (check(a, b))
    {
        //  int cnt = 0;
        int st = 0;
        int en = 0;
        rep(i, 0, a.size())
        {
            if (a[i] == '0')
            {

                st = i+1;
                while (a[i] == '0')
                {
                    i++;
                }
                en = i ;
                i--;
                ans.pb(mp(st , en));
                if(st >1) b[0] = '0' + ('1' - b[0]) ;
     
                
            }
           
        }
        if (b[0] == '0')
        {
            ans.pb(mp(1, n));
        }
        else
        {
            ans.pb(mp(1, 1));
            ans.pb(mp(2, n));
        }
        prtYES;
        cout << ans.size()<<"\n";
        for (auto &p : ans)
        {
            cout << p.first << " " << p.second << "\n";
        }
    }
    else
    {
        prtNO;
        return;
    }

    // int a1 = 0, a0 = 0, b1 = 0, b0 = 0;

    // rep(i, 0, n)
    // {
    //     if (a[i] == '0')
    //         a0++;
    //     else
    //         a1++;
    //     if (b[i] == '0')
    //         b0++;
    //     else
    //         b1++;
    // }
    // if (a0 == n && b0 == n)
    // {
    //     prtYES;
    //     cout << 0 << "\n";
    //     return;
    // }
    // if (a1 == n && b0 == n)
    // {
    //     prtYES;
    //     cout << 1 < "\n";
    //     cout << 1 << ' ' << n << "\n";
    // }
    // int st = 0;
    // int
    // rep(i, 0, n)
    // {
    // }
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
