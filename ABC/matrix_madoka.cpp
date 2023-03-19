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
/*
 //                                          union - find approach
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

void solve()
{
    int n;
    cin >> n;
    int k, r, c;
    cin >> k >> r >> c;
    // int size = (n / k == 1) ? n : n / k;
    vector<string> ele(k + 1,"");

    for (int i = k; i >=1; i--)
    // rep(i,1, k+1)
    {
        int cur = i;
        for (int j = 1; j <= n; j++)
        // rrep(j,n, 1)
        {
            if (j == cur)
            {
            
                ele[i].push_back('1');
            
                cur += k;
            }
            else
        
                ele[i].push_back('0');
        }
    
    }
reverse(all(ele));
    // for (int i = 0; i < k; i++)
    //     cout << ele[i] << "\n";
    // vector<string> ans;
    // // cout<<
    int st = ( c % k);
    int row =  r % k;
    int diff = row - st;
    if(diff < 0 ) {
        for(int i = 0; i < st-1; i++){
                ans.push_back(ele[i]);

        }
        int j = 0;
        while(j<(n-k)/k){
            rep(i,0,k){
                ans.push_back(ele[i])
            }
        }
    }
    // diff--;
    // int j = 0;
    // while (j < (n / k))
    // {
      
    //         for (int i = 0; i < k; i++)
    //         {
    //             int in = ((i + diff) % k );
    //             ans.push_back(ele[in]);
    //         }
        
       
    //     j++;
    // }

    // for(auto s:ans){
    //     cout<<s<<"\n";
    // }
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
