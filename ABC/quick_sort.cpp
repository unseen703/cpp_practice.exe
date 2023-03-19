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
//  find k<= x     auto it1 = st.upper_bound(x);  if (it1 != st.begin())        {  it1--;  int k = *it1;}
//                                          union - find approach...........................................................................

// const int N = 1e5 + 10;
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

void DKK()
{
    int n;
    cin >> n;

    vi v(n);
    rep(i, 0, n) cin >> v[i];
    if (n == 1)
    {
        prtYES;
        cout << 1 << "\n"
             << 1 << "\n";
        return;
    }
    vi a(n, 0), b(n, 0);

    vi m(n + 1);
    vi vis1(n + 1, 0);

    set<int> remb;
    set<int> rema;
int z = -1;
    rep(i, 0, n)
    {
        if (m[v[i]])
        {
            b[i] = v[i];
            remb.erase(v[i]);
        }
        else
        {
            a[i] = v[i];
            remb.insert(v[i]);
        }
        m[v[i]]++;
        if(v[i] == n) z = i;
    }
    rep(i , 0 ,n){
        if(m[v[i]] > 2){
            prtNO;
            return;
        }
        // else if(v[i] > 1 && m[v[i]] >1 && m[v[i] -1] >1){
        //     prtNO;
        //     return;
        // }
    }
    if(z <0){
         prtNO;
        return;
    }
    if (m[n] ==1)
    {
        a[z] = n;
        b[z] = n;
    }
    // if(m[n])
     if (m[1] >1)
    {
       prtNO;
       return;
    }
 
    rep(i, 0, n)
    {
        if (v[i] == 1)
        {
            vis1[v[i]] = 1;
            a[i] = 1;
            b[i] = 1;
        }
        else if (vis1[v[i] - 1] == 1)
        {
            if(m[v[i]] >1){
                prtNO;
                return;
            }
            vis1[v[i]] = 1;
            a[i] = v[i];
            b[i] = v[i];
        }
        
    }
    rep(i, 1, n + 1)
    {
        if (!m[i])
        {
            rema.insert(i);
            remb.insert(i);
        }
    }

    m = vi(n + 1, 0);
    rep(i, 0, n)
    {
        m[a[i]]++;
    }
    rep(i, 1, n + 1)
    {
        if (m[i])
            continue;
        // cout<<i<<"pesent in rem\n";
        rema.insert(i);
    }

    rep(i, 0, n)
    {
        if (a[i] != 0)
            continue;
        int x = b[i];
        // cout<<x<<" in b \n";
        auto it1 = rema.upper_bound(x);
        if (it1 != rema.begin())
        {
            // if(it1 == rema.end()) it1--;
            it1--;
            int x = *it1;}
            if ((*it1) <= x)
            {

                a[i] = (*it1);
                rema.erase(it1);
            }
            else
            {
                prtNO;
                return;
            }
        }
        else
        {
            prtNO;
            return;
        }
    }

    rep(i, 0, n)
    {
        // auto it = filledb.begin();
        if (b[i] != 0)
            continue;
        int x = a[i];
        auto it1 = remb.upper_bound(x);
        if (it1 != remb.begin())
        {
            // if(it1 == rema.end()) it1--;
            it1--;
            if ((*it1) <= x)
            {

                b[i] = (*it1);
                // filledb.erase(it);
                remb.erase(it1);
            }
            else
            {
                prtNO;
                return;
            }
        }
        else
        {
            prtNO;
            return;
        }
    }

    prtYES;
    for (auto i : a)        cout << i << " ";
    cout << "\n";
    for (auto i : b)        cout << i << " ";
    cout << "\n";
    // cout<<rem1.size()<<rem2.size()<<"\n";
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
