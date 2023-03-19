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
const int mod = 1e9 + 7;
const long long mod_m = 1e18;
int bin_expo(int n, int base)
{
    if (n == 0)
        return 1;
    int ans = 1;
    ans = bin_expo(n / 2, base) % mod;
    if (n & 1)
        return (((ans * 1LL * ans) % mod) * 1LL * base) % mod;
    return (ans * ans) % mod;
}
int bin_expo_itr(int n, int base)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
        {
            ans = (ans * 1LL * base) % mod;
        }
        base = (base * 1LL * base) % mod;
        n >>= 1;
    }
    return ans;
}
// for mod  ~~ 1e18;
LL bin_multiply(LL a, LL b)
{
    LL ans = 0;
    while (b)
    {
        if (b & 1)
            ans = (ans + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}

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

// int gcd(vi &v){

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
vector<int> divisor(int n)
{
    vi ans;
    rep(i, 2, sqrt(n) + 1)
    {
        if (n % i == 0)
        {
            if (i * i != n)
            {
                ans.pb(i);
                ans.pb(n / i);
            }
            else
            {
                ans.pb(i);
            }
        }
    }
    return ans;
}
LL fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------

const int N = 2e5 + 2;
// long long int dp[N];
vi ans;
vi vis;
int dfs(int ver, int cnt, vi &v)
{
    vis[ver] = 1;
    cnt++;

    int child = v[ver];
    if (vis[child])
        return cnt;
    return ans[child] = dfs(child, cnt, v);
}
void printnary(LL n, int k)
{
    while (n)
    {
        cout << n % k << " ";
        n = n / k;
    }
}

bool isValid(int k, vll &a)
{
    int i = 0;
    while (a[i] <= k)
        i++;
    if (i >= 2 * k - 1)
        return true;
    return false;
}
void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    vi v(n);

    rep(i, 0, n)
    {
        cin >> v[i];
    }
    vi vis(n, 0);

    LL ans = 0;
    int temp = 0 ;// variable that stores the position of previous smallest element in row of 1 which is to be ignored i.e. not to be considered in our answer  OR it store the value of element associated with zero
rep( i , 0 , n){   
if(s[i] == '1'){
    ans += max(v[i], temp);
}
if( s[i] == '0' || v[i] < temp) temp= v[i];
}
    // s.pb('0');
    // rep(i, 0, n)
    // {
    //     // if we find 0 and some row of 1 then we will find the  smallest number from the row of 1 via brute force
    //     if (s[i] == '0' && s[i + 1] == '1')
    //     {
    //         rep(j, i + 1, n)
    //         {
    //             if (s[j] == '1')
    //             {
    //                 if (v[j] < v[i])
    //                 {
    //                     swap(s[i], s[j]);
    //                     i = j - 1;
    //                     break;
    //                 }
    //             }
    //             else
    //             {
    //                 i = j - 1;
    //                 break;
    //             }
    //         }
    //     }
    // }
    // for(int i = 0; i < n ; i++){
    //     if( s[i] == '1'){
    //         ans += v[i];
    //     }
    // }
    cout<<ans<<"\n";
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
