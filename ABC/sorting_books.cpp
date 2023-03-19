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

//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
int check(int i)
{
    int cnt = 0;
    while (i % 5 == 0)
    {

        cnt++;
        i /= 5;
    }
    return cnt;
}
// const int N = 16;
// vector<vector<string>> v(N);
void solve()
{
    int n, k;
    cin >> n>>k;
    string s;
    cin>>s;
    vi v(25);
    // v[0] = {"0", "1"};
    // v[1] = {"00", "01", "11", "10"};
rep(i , 0 ,n){
 v[s[i]  - 'a']++;

}
    // string s = "";
    queue<string> q;

    



    if(n == 1){
        cout<<"0\n1";
        return;
    }
    q.push("00");
    q.push("01");
    q.push("11");
    q.push("10");
    for (int i = 2; i < n; i++)
    {
        int j = 0;
        while (q.size() != pow(2, i + 1) )
        {
            
                string s = q.front();
                if (j % 2 == 0)
                {
                    q.push(s+ "0");
                    q.push(s + "1");
                }
                else
                {
                    q.push(s + "1");
                    q.push(s + "0");
                }

                q.pop();
            j++;
        }
    }
   while(q.size()){
    cout<<q.front()<<"\n";
    q.pop();
   }
}

int main()
{
    fio;
    int t = 1;
    // cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
