// // hey there you yes, you who is doubting himself again and again
// // let me tell you it's gonna be alright so just don't give up yet. just one more question
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define rrep(i, a, b) for (int i = a; i >= b; i--)
// #define input(a, n)             \
//     for (int i = 0; i < n; i++) \
//         cin >> a[i];
// #define prtNO cout << "NO\n"
// #define prtYES cout << "YES\n"
// // #define prt(x,y) cout << x<<" "<<y<<"\n";
// #define prt(x) cout << x << "\n"

// #define LL long long
// #define mp(x, y) make_pair(x, y)
// #define pb(x) push_back(x)
// #define ff first
// #define ss second
// #define all(v) v.begin(), v.end()
// #define pii pair<int, int>
// #define vi vector<int>
// #define vll vector<LL>
// #define vpi vector<pii>
// #define vs vector<string>
// #define mii map<int, int>
// #define mll map<LL, LL>
// #define BSet_Cnt(x) __builtin_popcount(x)

// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)

// // cout << "Case #" << i << ": " <<  << "\n";
// // never ever use endl until asked
// // In C++, comparator should return false if its arguments are equal. ref:- cf blog entry 70237
// // lambda function  [](parameters) ->(return type) { return (condition / operation); }
// //  resource --> generalized lambda expre. --> geeksforgeek
// // a &(~(1<<i)) unsets  ith bit
// //  a|(1<<i) sets ith bit
// //  a&(1<<i) != 0  bit is set or not

// // unique function removes duplicates and returns value of an iterator to the element that follows the last element not removed
// // more-importantly it doesnt resizes your vector/container so do resize it before further uses

// // following are two ways to do so
// // #define remove_duplicates(v) sort(all(v));  nums.erase(unique(all(v)), v.end()); // vector will be sorted in this case;
// // #define unique(v) v.resize(distance(v.begin(),unique( v.begin(),all(v) ) ) );
// // or use set and store elemnent in it and assign it to a vector ( will use o(n ) extra space)

// // priority_queue<long long, vector<long long>, greater<long long> > pq;

// //                                          union - find approach...........................................................................
// /*
// const int N = 1e5 + 10;
// int par[N];
// int size[N];
// void make(int v)
// {
//     par[v] = v;
//     size[v] = 1;
// }
// int find(int v)
// {
//     if (par[v] == v)
//         return v;
//     return par[v] = find(par[v]);
// }

// void Union(int a, int b)
// {
//     a = find(a);
//     b = find(b);
//     if (a != b)
//     {
//         if (size[a] < size[b])
//             swap(a, b);
//         par[b] = a;
//         size[a] += size[b];
//     }
// }*/
// // ------------------------------------------------------------------------><------------------------------------------------------------------------------------------------------
// // const int mod = 1e9 + 7;
// // const long long mod_m = 1e18 ;
// // int bin_expo(int n, int base ){ if(n== 0) return 1; int ans = 1; ans  = bin_expo(n/2, base)%mod; if(n&1) return (((ans*1LL*ans)%mod)*1LL*base )%mod; return (ans*ans)%mod; }
// // int bin_expo_itr(int n , int base){ int ans = 1; while(n){ if(n&1){ ans = (ans*1LL*base)%mod;} base = (base*1LL*base)%mod; n>>=1; } return ans; }
// // // for mod  ~~ 1e18;
// // LL bin_multiply(LL a, LL b){ LL ans = 0; while(b){ if(b&1) ans = (ans+a )%mod; a = (a+a )%mod; b>>=1;} return ans;}

// //------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
// int s, m;
// string func(int Cur_s, int len, string &ans, vector<vector<int>> &dp, int m)
// {
//     if ( Cur_s > s || len < 0)
//     {
//          return "-1";
//     }

// //   if(dp[][])
//     for (int i = 0; i < 10; i++)
//     {
//         if (m == len && i > 0)
//         {
//             if (func(Cur_s + i, len - 1, ans, dp, m) != "-1")
//             {
//                 ans.push_back('0' + i);
//                 dp[len][Cur_s] = 1;
//             }
//         }
//     }

//     return dp[len][Cur_s];
// }
// void solve()
// {
//     int m, s;
//     cin >> m >> s;
//     // string s;
//     // rep(i, 0, m)
//     // {
//     // }
//     // a= min(a,min(b,c));

//     int ans = 0;
//     rep(i, 0, 9 + 1)
//     {
//         rep(j, 0, 9 + 1)
//         {
//             if (i + j <= n)
//             {
//                 int t = (n - i * v[0] - j * v[1]);
//                 if (t >= 0)
//                 {
//                     if (t % v[2] == 0 && i + j + t / v[2] <= n)
//                     {
//                         ans = max(ans, i + j + t / v[2]);
//                     }
//                 }
//             }
//         }
//     }
//     cout << ans << "\n";
// }

// int main()
// {
//     fio;
//     int t = 1;
//     // cin >> t;
//     // t = 1;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

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
// #define prt(x,y) cout << x<<" "<<y<<"\n";
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

//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
bool dp[200][1001];
int m, s;
string helper(int len, int sum, string str, int flg)
{
    if (sum > 9 * len || sum < 0)
        return "-1";
    if (dp[len][sum])
        return "-1";
    dp[len][sum] = true;
    if (len == 0)
    {
        if (sum == 0)
            return str;
        else
            return "-1";
    }
    if (flg)
    {
        rep(i, 0, 10)
        {
            if (len < m || i > 0 )
            {
                char num = char('0' + i);
                string x = helper(len - 1, sum - i, str + num, flg);
                if (x != "-1")
                    return x;
            }
        }
    }
    else
    {
        rrep(i, 9, 0)
        {
            if (len < m || i > 0 )
            {
                char num = char('0' + i);
                string x = helper(len - 1, sum - i, str + num, flg);
                if (x != "-1")
                    return x;
            }
        }
    }
    return "-1";
}
void solve()
{
    // int m , s;
    cin >> m >> s;
    if (s == 0)
    {
        if (m > 1)
        {
            cout << "-1 -1";
            return;
        }
        else {cout<<"0 0";
        return ;
        }
    }
    string str = "";

    string mn = helper(m, s, str, 1);

    memset(dp, 0, sizeof(dp));
    string mx = helper(m, s, str, 0);
    cout << mn << " " << mx;
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