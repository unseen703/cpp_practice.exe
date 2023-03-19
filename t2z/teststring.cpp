#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k;
  cin >> k;
  string s;
  cin >> s;
  string s1;
  int n = s.size();
sort(s.begin(), s.end());
  unordered_map<char, int> m;
  for (int i = 0; i < s.size(); i++)
  {
    m[s[i]]++;
  }

  for (auto it = m.begin(); it != m.end(); it++)
  {
    if (((*it).second) % k  )
    {
      cout << "-1";
      exit(0);
    }

  }

 
   for (auto  &v: m)
   {
    int count = v.second / k;
    //cout << count;
    for (int i = 0; i < count; i++)
     s1.append(count,v.first);
  }
  for (int i = 0; i < k; i++)
    cout << s1;
    return 0;
}
