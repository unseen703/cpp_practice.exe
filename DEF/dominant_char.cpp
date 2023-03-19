#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define vi vector<int>

#define fio                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

int main()
{
  fio;
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

      int ans = INT_MAX;
     if (  s.find("abbacca") != string ::npos || s.find("accabba") != string ::npos)
        ans = 7;
       if (s.find("abca") != string ::npos || s.find("acba") != string ::npos)
        ans = 4;
       if (s.find("aca") != string ::npos || s.find("aba") != string ::npos)
        ans = 3;
           if (s.find("aa") != string::npos)
        ans = 2;
      
      if (ans == INT_MAX) cout<<"-1\n";
      else cout<<ans<<"\n";
                 
  }
  return 0;
}