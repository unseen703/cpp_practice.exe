#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()){
    cout<<"NO";
    exit(0);}

int n = s1.size(); 
for (int i = 0; i < n; i++)
{
  if(s1[i] == s2[n-i-1])
  continue;
  else
  {
      cout<<"NO";
      exit(0);
  }
  
}
cout<<"YES";
}