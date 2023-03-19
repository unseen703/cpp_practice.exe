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

//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
vi lev, vis;
bool Is_valid(int ch, int m)
{
    if (ch <= 0 || ch > m * 2 + 1)
        return false;
    return true;
}
int bfs(int n, int m)
{

    lev[n] = 0;
    vis[n] = 1;

    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        int v = q.front();
        //   cout<<v<<" /";
        q.pop();

        int ch = v * 2;

        if (Is_valid(ch, m))
        {
            if (!vis[ch])
            {
                q.push(ch);
                vis[ch] = 1;
                lev[ch] = lev[v] + 1;
            }
        }

        ch = v - 1;
        if (Is_valid(ch, m))
        {
            if (!vis[ch])
            {
                q.push(ch);
                vis[ch] = 1;
                lev[ch] = lev[v] + 1;
            }
        }
        if (lev[m] != INT_MAX)
        {
            break;
        }
    }
    return lev[m];
}
int countDigit(int n)
{
    int cnt = 0;
    while (n)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}
void solve()
{
    // int m , s;

    int n;
    cin >> n;
    vector<string> v(2);
    // rep(i , 0 , 2) cin
    cin >> v[0];
    cin >> v[1];
    if(n == 1){
        prtYES;
        return;
    }

int j = n-1;
while( j>= 0 && v[0][j] == 'W' && v[1][j] == 'W') j--;
if(j == 0 ) {
    prtYES;
    return;
}
int k = 0;
while( k < j+1 && v[0][k] == 'W' && v[1][k] == 'W')k++;
if(k == j){
    prtYES;
    return;
}
// cout<<k<<" "<<j<<" k j \n";
    // int en = 0;

    int st = k;
    rep(i, k, j+1)
    {
        // cout<<i<<" 1st\n";
        st = i;
        if (v[0][i] == 'W')
        {
            if (v[1][i] == 'W')
            {
                prtNO;
                return;
            }
            st = i;
            i++;
        
        // cout<<i<<" 1st\n";
            while (i < j+1 && v[0][i] != 'W')
            {
                if (v[1][i] == 'W' && (i - st - 1) % 2 == 0)
                {
                    prtNO;
                    return;
                }
                i++;
            }
            if (v[0][i] == 'W' && (i - st - 1) % 2)
            {
                prtNO;
                return;
            }
            if(v[0][i] == 'W') i--;
        }
    }
    rep(i, k, j+1)
    {
        // cout<<i<<" 2nd\n";
        st = i;
        if (v[1][i] == 'W')
        {
            if (v[0][i] == 'W')
            {
                prtNO;
                return;
            }
            st = i;
            i++;
         
            while (i < j+1 && v[1][i] != 'W')
            {

        // cout<<i<<" 2nd2\n";
                if (v[0][i] == 'W' && (i - st - 1) % 2 == 0)
                {
                    prtNO;
                    return;
                }
                i++;
            }
            if (v[1][i] == 'W' && (i - st - 1) % 2)
            {
                prtNO;
                return;
            }
            if(v[1][i] == 'W') i--;
        }
    }
    prtYES;
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