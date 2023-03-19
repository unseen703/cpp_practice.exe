// // // hey there you yes, you who is doubting himself again and again
// // // let me tell you it's gonna be alright so just don't give up yet. just one more question
// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;

// // #define rep(i, a, b) for (int i = a; i < b; i++)
// // #define rrep(i, a, b) for (int i = a; i >= b; i--)
// // #define input(a, n)             \
// //     for (int i = 0; i < n; i++) \
// //         cin >> a[i];
// // #define prtNO cout << "NO\n"
// // #define prtYES cout << "YES\n"
// // // #define prt(x,y) cout << x<<" "<<y<<"\n"
// // #define prt(x) cout << x << "\n"

// // #define LL long long
// // #define mp(x, y) make_pair(x, y)
// // #define pb(x) push_back(x)
// // #define ff first
// // #define ss second
// // #define all(v) v.begin(), v.end()
// // #define pii pair<int, int>
// // #define vi vector<int>
// // #define vll vector<LL>
// // #define vpi vector<pii>
// // #define vs vector<string>
// // #define mii map<int, int>
// // #define mll map<LL, LL>
// // #define BSet_Cnt(x) __builtin_popcount(x)

// // #define fio                           \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);                    \
// //     cout.tie(NULL)

// // void solve()
// // {

// //     int n;
// //     n = 6;
// //     vi v = {4, 8, 15, 16, 23, 42};
// //     vi ans(6);
// //     map<int, pair<int, int>> m;
// //     rep(i, 0, 6)
// //     {
// //         rep(j, 0, 6)
// //         {
// //             if (i != j)
// //                 m[v[i] * v[j]] = {v[i], v[j]};
// //         }
// //     }
// //     // int x1, x2, x3, x4;
// //     vi q(4);
// //     rep(i, 0, 4)
// //     {
// //         string s;
// //         if (i == 0)
// //             s = "1 2";
// //         if (i == 1)
// //             s = "2 3";
// //         if (i == 2)
// //             s = "4 5";
// //         if (i == 3)
// //             s = "5 6";

// //         cout << "? " + s << endl;
// //         cin >> v[i];
// //     }
// //     int p1, p2;
// //     rep(i, 0, 4)
// //     {
// //         if (i == 0 || i == 2)
// //         {
// //             p1 = m[v[i]].first;
// //             p2 = m[v[i]].second;
// //         }
// //         else if (i == 1)
// //         {
// //             if (p1 == m[v[i]].first || p1 == m[v[i]].second)
// //             {
// //                 ans[1] = p1;
// //                 ans[0] = p2;
// //             }
// //             else if (p2 == m[v[i]].first || p2 == m[v[i]].second)
// //             {
// //                 ans[1] = p2;
// //                 ans[0] = p1;
// //             }
// //             if (m[v[i]].first != ans[1])
// //                 ans[2] = m[v[i]].first;
// //             else
// //                 ans[2] = m[v[i]].second;
// //             // cout<<p1<<" "<<p2<<"inside 1\n";
// //         }
// //         else if (i == 3)
// //         {
// //             // cout<<p1<<" "<<p2<<"inside 3\n";
// //             if (p1 == m[v[i]].first || p1 == m[v[i]].second)
// //             {
// //                 ans[4] = p1;
// //                 ans[3] = p2;
// //             }
// //             else if (p2 == m[v[i]].first || p2 == m[v[i]].second)
// //             {
// //                 ans[4] = p2;
// //                 ans[3] = p1;
// //             }
// //             if (m[v[i]].first != ans[4])
// //                 ans[5] = m[v[i]].first;
// //             else
// //                 ans[5] = m[v[i]].second;
// //         }
// //     }
// //     cout<<"! ";
// //     cout << flush;
// //     rep( i ,0, 6 ){cout<<ans[i]<<" "; cout << flush;}
// // }

// // int main()
// // {
// //     fio;
// //     int t = 1;
// //     // cin >> t;
// //     while (t--)
// //     {
// //         solve();
// //     }

// //     return 0;
// // }

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         // Code here
//        int vis[1004];
//        vector<int> ans;
//      memset(vis, 0, sizeof(vis));
//         queue<int> q;
//         q.push(0);
//         while(!q.empty())
//         {
//             int curr = q.front();
//             vis[curr] =1;
//            ans.push_back(curr);
//             q.pop();
//             for( auto &ch : adj[curr]){
//                 if(vis[ch])continue;
//                 else q.push(ch);
//             }
//         }
//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >>

//             E;

//         vector<int> adj[V];

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             // 		adj[v].push_back(u);
//         }
//         // string s1;
//         // cin>>s1;
//         Solution obj;
//         vector<int> ans = obj.bfsOfGraph(V, adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends
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

// //priority_queue<long long, vector<long long>, greater<long long> > pq;

//  //                                          union - find approach...........................................................................
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

//        int ch = v*2;

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

// void solve()
//  {
//     int m , s;
//     cin >>m>>s;

//  }

// int main()
// {
//  fio;
//     int t = 1;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }