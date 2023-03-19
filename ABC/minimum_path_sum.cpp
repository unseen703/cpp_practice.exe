#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization("unroll-loops")
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define BSet_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef map<int, int> mii;

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

const int N = 1e5 + 10;
// int par[N];
// int size[N];
void make(int v);
int find(int v);
void Union(int a, int b);

// ------------------------------------------------------------------------><------------------------------------------------------------------------------------------------------
const int mod = 1e9 + 7;
const long long mod_m = 1e18;
int bin_expo(int n, int base);
int bin_expo_itr(int n, int base);
ll bin_multiply(ll a, ll b);
bool isPrime(int n);
void fillsieve(int N);
//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------


    int fun(int i, int j, vector<vector<int>> &v)
    {

        if (i < 0 || j < 0)
            return 0;
        if (i > 0)
        {
            int ans = INT_MAX;

            if (j - 1 >= 0)
                ans = min(ans, fun(i - 1, j - 1, v));
            if (j +  1 < v.size())
                ans = min(ans, fun(i - 1, j + 1, v));
            if (ans != INT_MAX)
                return ans + v[i][j];
        }
        return v[i][j];
    }
    int minFallingPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            ans = min(ans, fun(n - 1, i, grid));
        }
        return ans;
    }


//  it's gonna be alright so just don't give up yet. just one more question
void DKK()
{
    int m, s;
    cin >> m >> s;
}

int main()
{
    fio;
    int t = 1;

    while (t--)
    {
        DKK();
    }

    return 0;
}

/*

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
}
*/
// Binary exponentiation
ll bin_multiply(ll a, ll b)
{
    ll ans = 0;
    while (b)
    {
        if (b & 1)
            ans = (ans + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}
int bin_expo(int n, int base)
{
    if (n == 0)
        return 1;
    int ans = 1;
    ans = bin_expo(n / 2, base) % mod;
    if (n & 1)
        return (((ans * 1ll * ans) % mod) * 1ll * base) % mod;
    return (ans * ans) % mod;
}
int bin_expo_itr(int n, int base)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
        {
            ans = (ans * 1ll * base) % mod;
        }
        base = (base * 1ll * base) % mod;
        n >>= 1;
    }
    return ans;
}

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    if (n < 4)
        return 1;
    if (!(n % 2) || !(n % 3))
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (!(n % i) || !(n % (i + 2)))
            return 0;
    return 1;
}

void fillsieve(int N)
{
    vi primes;
    vi seive(N + 1);
    for (ll i = 3; i < N; i += 2)
        seive[i] = i;
    for (ll i = 3; i * i < N; i++)
        if (seive[i] == i)
            for (ll j = 3 * i; j < N; j += 2 * i)
                seive[j] = i;
}
