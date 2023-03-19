// #pragma GCC optimize("Ofast")
// #pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimization("unroll-loops")
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define rrep(i, a, b) for (int i = a; i >= b; i--)

// #define prtNO cout << "NO\n"
// #define prtYES cout << "YES\n"
// #define mp(x, y) make_pair(x, y)
// #define pb(x) push_back(x)
// #define ff first
// #define ss second
// #define all(v) v.begin(), v.end()
// #define BSet_Cnt(x) __builtin_popcount(x)

// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                       \
//     cout.tie(0)

// typedef long long ll;
// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<pii> vpi;
// typedef map<int, int> mii;

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

// //  priority_queue<long long, vector<long long>, greater<long long> > pq;
// //  find k<= x     auto it1 = st.upper_bound(x);  if (it1 != st.begin()) {  it1--;  int k = *it1;}
// //                                          union - find approach...........................................................................

// const int N = 1e5 + 10;
// // int par[N];
// // int size[N];
// void make(int v);
// int find(int v);
// void Union(int a, int b);

// // ------------------------------------------------------------------------><------------------------------------------------------------------------------------------------------
// const int mod = 1e9 + 7;
// const long long mod_m = 1e18;
// int bin_expo(int n, int base);
// int bin_expo_itr(int n, int base);
// ll bin_multiply(ll a, ll b);
// bool isPrime(int n);
// void fillsieve(int N);
// //------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
// int operate(vector<ll> v)
// {
//     int n = v.size();
// multiset<ll> q;

//     int ans = 0;
//     ll cur = 0;
//         rep(i, 0, n)
//         {
//             cur += v[i];
//             q.insert(v[i]);
//             while (cur < 0)
//             {
//                 auto it  = q.begin();
//                 cur += (-2LL * (*it));
//                 q.erase(it);
//                 ans++;
//             }
//         }
//   return ans;
// }
// //  it's gonna be alright so just don't give up yet. just one more question
// void DKK()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<ll> v(n);
//     rep(i, 0, n) cin >> v[i];

//     vector<ll> pre(n);
//     ll mn = v[0];
//     pre[0] = v[0];
//     rep(i, 1, n)
//     {
//         pre[i] = pre[i - 1] + v[i];
//         mn = min(mn, pre[i]);
//     }

//     if (pre[m - 1] <= mn)
//     {
//         cout << 0 << "\n";
//         return;
//     }

// ll ans  = 0; ans += operate({v.begin() +m, v.begin() +n } );

// vector<ll> temp;
//   for( int i = m-1; i ; i--){
// temp.pb(-v[i]);
//    }
// ans += operate(temp);

//     cout << ans << "\n";
// }

// int main()
// {
//     fio;
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         DKK();
//     }

//     return 0;
// }

// /*

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
// }
// */
// // Binary exponentiation
// ll bin_multiply(ll a, ll b)
// {
//     ll ans = 0;
//     while (b)
//     {
//         if (b & 1)
//             ans = (ans + a) % mod;
//         a = (a + a) % mod;
//         b >>= 1;
//     }
//     return ans;
// }
// int bin_expo(int n, int base)
// {
//     if (n == 0)
//         return 1;
//     int ans = 1;
//     ans = bin_expo(n / 2, base) % mod;
//     if (n & 1)
//         return (((ans * 1ll * ans) % mod) * 1ll * base) % mod;
//     return (ans * ans) % mod;
// }
// int bin_expo_itr(int n, int base)
// {
//     int ans = 1;
//     while (n)
//     {
//         if (n & 1)
//         {
//             ans = (ans * 1ll * base) % mod;
//         }
//         base = (base * 1ll * base) % mod;
//         n >>= 1;
//     }
//     return ans;
// }

// bool isPrime(int n)
// {
//     if (n < 2)
//         return 0;
//     if (n < 4)
//         return 1;
//     if (!(n % 2) || !(n % 3))
//         return 0;
//     for (int i = 5; i * i <= n; i += 6)
//         if (!(n % i) || !(n % (i + 2)))
//             return 0;
//     return 1;
// }

// void fillsieve(int N)
// {
//     vi primes;
//     vi seive(N + 1);
//     for (ll i = 3; i < N; i += 2)
//         seive[i] = i;
//     for (ll i = 3; i * i < N; i++)
//         if (seive[i] == i)
//             for (ll j = 3 * i; j < N; j += 2 * i)
//                 seive[j] = i;
// }

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

class Solution
{
public:
    int longestArithSeqLength(vector<int> &nums)
    {
        // 2*b -c = a; 2*b - a = c  a+c = 2b;
        // to make ap 2 variables require
        int n = nums.size();
        if (nums.size() == 2)
            return 2;
        map<int, int> m;
        // vector<int> vis(n + 1);
        vector<int> pos(505, 0);
        int mn = 10000;
        int mx = -10000;
        int j = 0;
        for (auto &i : nums)
        {
            pos[i] = j;
            // //  else pos[i+1001] = j;
            mx = max(mx, i);
            mn = min(mn, i);
            m[i]++;
            j++;
        }
        int ans = 2;
        int st = mn - mx;
        int en = mx - mn;
        for (int i = min(st, st -2); i <= max(en , en+2); i++)
        {

            for (int j = 0; j < nums.size(); j++)
            {
                int ln = 1;
                int pre =  -2;
                int k = j;
                while (k < n)
                {
                    int nxt = nums[k] + i;
                    if (nxt < 0)
                     {k++;   continue;}
if( pre != -2 && nums[k] != pre +i)break;
                    if (m[nxt] > 0)
                    {
                        ln++;
                        ans = max(ln, ans);
                        pre = nums[k];
                        if (--m[nums[k]] == 0)
                            m.erase(nums[k]);

                        k = pos[nxt];
                        if (i == 3)
                            cout << pre << " " << nxt << i << " 1 ";

                        k--;
                    }
                    else
                    {

                        break;
                    }
                    k++;
                }
            }
        }
        // if (ans < 2 && n>= 2) ans = 2;
        return ans;
    }
};

/*
  int st = mn - mx;
        int en = mx - mn;
    
            int ln = 1;
int pre = nums[0];
            for (int j = 0; j < nums.size(); j++)
            {
                int nxt = 0;
 if(pre != -2 && pre + i != nums[j]) break;
  nxt += pre== -2 ?nums[j]+i:pre+i;
                 nxt = pre + i;
                if (nxt < 0)
                    continue;
                    if (m[nxt] > 0)
                    {
                        ln++;
                        pre = nums[j];

                         ans = max(ln, ans);
                        j = pos[nxt];
                        if (--m[nxt] == 0)
                            m.erase(nxt);
                        if(i == 3) cout<<pre<<" "<<nums[j] <<i<<" 1 ";

                        j--;
                    }
                    else
                    {
                     
                        break;
                    }
               
            }
        }
// if (ans < 2 && n>= 2) ans = 2;*/
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

//  priority_queue<long long, vector<long long>, greater<long long> > pq;
//  find k<= x     auto it1 = st.upper_bound(x);  if (it1 != st.begin()) {  it1--;  int k = *it1;}
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

//  it's gonna be alright so just don't give up yet. just one more question
void DKK()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];
// cout<<
class Solution obj;
cout<< obj.longestArithSeqLength(v);
    // vector<ll> pre(n);
    // ll mn = v[0];
    // pre[0] = v[0];
    // cout << pre[0] << " " << 0 << " ";
    // rep(i, 1, n)
    // {
    //     pre[i] = pre[i - 1] + v[i];
    //     mn = min(mn, pre[i]);
    //     cout << pre[i] << " " << i << " ";
    // }
    // cout << "\n";
    // if (pre[m - 1] <= mn)
    // {
    //     cout << 0 << "\n";
    //     return;
    // }
    // multiset<ll> q;
    // ll cur = 0;
    // int ans = 0;
    // rep(i, m, n)
    // {
    //     cur += v[i];
    //     q.insert(v[i]);
    //     while (cur < 0)
    //     {
    //         int x = *q.begin();
    //         cur += (-2LL * x);
    //         q.erase(q.begin());
    //         ans++;
    //     }
    // }

    // cur = 0;
    // // multiset<ll> q1;
    // q.clear();
    // // for(int i = m-1; i ; i--)v[i] *=-1;
    // for (int i = m - 1; i >= 0; i--)
    // {
    //     // cout<<i<<" i \n";
    //     cur += -1 * v[i];
    //     q.insert(-1 * v[i]);
    //     while (cur < 0)
    //     {
    //         int x = *q.begin();
    //         cur += -2LL * x;
    //         q.erase(q.begin());
    //         ans++;
    //     }
    // }

    // cout << ans << "\n";
}

int main()
{
    fio;
    int t = 1;
    cin >> t;
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
