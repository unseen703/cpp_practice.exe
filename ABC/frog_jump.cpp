#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

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

//  it's gonna be alright so just don't give up yet. just one more question
int main()
{
  fio;
  int t = 1;

  int n, k;
  cin >> n >> k;
  vector<int> v(n);

  rep(i, 0, n)  cin >> v[i]; 

  vi dp(n, INT_MAX);
  dp[0] = 0;
  for (int i = 1; i < n; i++)
    for (int j = 1; j <= k; j++)
      if (i - j >= 0)
        dp[i] = min(dp[i - j] + abs(v[i] - v[i - j]), dp[i]);

  cout << dp[n - 1] << "\n";
  return 0;
}
