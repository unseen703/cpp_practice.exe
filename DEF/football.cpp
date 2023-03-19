#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define vi vector<int>

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 2 * (count(s.begin(), s.end(), 'C')) + count(s.begin(), s.end(), 'D');
    int N = 2 * (count(s.begin(), s.end(), 'N')) + count(s.begin(), s.end(), 'D');
    if (c > N)
    {
      cout << n * 60 << "\n";
    }
    else if (c < N)
    {
      cout << n * 40 << "\n";
    }
    else
      cout << n * 55 << "\n";
  }
  return 0;
}
