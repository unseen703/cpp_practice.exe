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

// void DKK()
// {
//   int n ;
//   cin>>n;
//   vi h(n);
//   rep( i , 0  ,n) cin>>h[i];
//   sort(all(h));


// int cnt = 0;
// int cnt_1 = 0;
// rep( i , 0 , n)if(h[i] == 1) cnt_1++;
// // cout<<cnt_1<<"\n";
//         cnt += cnt_1/2 +cnt_1%2 + (n - cnt_1);
     
// cout<<cnt<<"\n";




void DKK()
{
  int n ;
  cin>>n;
  vector<vi> m(n, vi(n-1));
  rep(i , 0  ,n){
      
      rep(j, 0 ,n-1){
          cin>>m[i][j];
      }
  }
  vector<int> ans(n , 0);
    int mx = 0;
    map<int, int> fre;
    
    rep(i , 0 ,n){
        fre[m[i][0]]++;
    }
        auto it = fre.begin();
      auto x1 = (*it).first;
      auto x3 = (*it).second;
      auto x2 = (*(++it)).first;
      auto x4 = (*(it)).second;
       ans[0] = ((x3> x4) ?x1:x2);
      
      rep( i , 0 , n){
          if(m[i][0] != ans[0]){
              rep(j, 0 , n-1){
                  ans[j+1] = m[i][j];
              }
              break;
          }
      }
  for(auto i : ans) cout<<i<<" ";
  
    cout<<"\n";
}
int main()
{
    fio;
    // fillsieve();
    // for(int i = 3; i <N)
    int t = 1;
    cin >> t;
    while (t--)
    {
        DKK();
    }

    return 0;
}


