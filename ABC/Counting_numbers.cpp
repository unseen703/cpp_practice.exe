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

#define fio                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef map<int, int> mii;

//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------
// long long check(long long a)
long long dp[19][10][2][2];
long long fun(string &s ,int i, int pre, long long a, int lz, int tight)
{
    if(i == s.length()) return 1;
    if( pre != -1  &&  dp[i][pre][lz][tight] != -1)      return dp[i][pre][lz][tight];
    
  int lt = 9;
  if (tight)    lt = s[i] - '0';
  
  long long ans = 0;
  for (int d = 0; d <= lt; d++)
  {
      // if( lz  == 0 && d == pre)continue;
  
  if(d== 0 && lz == 1){

      ans += fun(s,i +1, d, a, 1 , (tight && (d == lt)));
  }
  else if( d != pre){

      ans += fun(s,i +1, d, a, 0 , (tight && (d == lt)));
  }

      // ans += fun(s,i - 1, d, a, 0, );

  }
  return dp[i][pre][lz][tight] = ans;
}

//   const int mod = 1e9 + 7;
//  it's gonna be alright so just don't give up yet. just one more question

// int join[1000003], sep[1000003];
int main()
{
  fio;
  long long a, b;
  cin >> a >> b;

  string s1 = to_string(a-1);
  string s2 = to_string(b);
  // int n = s.length();
  
  memset(dp , -1, sizeof(dp));
  long long l = fun(s1, 0, -1, a-1, 1,1);

  memset(dp , -1, sizeof(dp));
  long long r = fun(s2,0, -1, b, 1,1);


  cout<<r- l<<"\n";
  return 0;
}
