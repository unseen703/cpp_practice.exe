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
typedef vector<ll> vll;
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
// #define remove_duplicates(v) sort(all(nums));  nums.erase(unique(all(nums)), nums.end()); // vector will be sorted in this case;
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

vi primes;

void fillsieve(int N)
{
    // primes.pb(2);
    vi seive(N + 1);
    if(N+1 >2)
    seive[2] = 2;

    for (ll i = 3; i < N; i += 2)
        seive[i] = i;
    for (ll i = 3; i * i < N; i++)
        if (seive[i] == i)
        {
          
            for (ll j = 3 * i; j < N; j += 2 * i)
                seive[j] = i;
        }
        for( int i = 2; i<N; i++ )if(  seive[i] == i ) primes.pb(i);
}

//  it's gonna be alright so just don't give up yet. just one more question
void DKK()
{
    int n;
    cin >> n;
    // for( auto i : primes ) cout<<i<<" ";
    vll v;

    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    // check for duplicates
    sort(all(v));
    v.erase(unique(all(v)), v.end());
    if (v.size() < n)
    {
        prtNO;
        return;
    }
    //  
    //  x = p*q +r, for any positive integer x
    // ai + x, aj + x will have p as their gcd if ai%p == r && aj%p == r.
    //  check reminder of every num with the every possible prime p;
    // if all r >= 2 in whole array then gcd of atleast one pair > 1 after addition of any number x
    // (x = p*q +r, for each r  we will get >= 2 numbers with p as common factor)
    // and as each reminder is atleast apearing 2 times in false cases, at max we will have to check for prime number p < n/2 ;
    //  for exaple for p = 53 we will need atleast 53*2  numbers  in array :> 
    for (auto &i : primes)
    {
        if( i> n/2) break;
        map<long long, int> m;
        // cout<<i<<" ";
        for (auto &j : v)
        {
            m[j % i]++;
// cout<<j%i<<" ";
        }
        // cout<<"\n";
        int flg = 1;
        for (int j = 0 ; j<i;j++ )
        {
            if (m[j]< 2)
            {
                flg = 0;
                break;
            }
          
        }
        if (flg)
        {
            // cout<< i<<"\n";
            prtNO;
            return;
        }
    }
    prtYES;
}

int main()
{
//     fio;
//     int t = 1;
//     fillsieve(50);
// cin>>t;
//     while (t--)
//     {
//         DKK();
//     }

// cout<< 1.00/2.00 + 2.00/4.00 <<"\n";
float x;
cin>>x;
cout<<x<<" "
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
