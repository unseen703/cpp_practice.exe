#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
string s1,s2;
cin>>s1>>s2;

string s;
for (int i = 0; i < s1.size(); i++)
{
   if(s1[i] - '0' != s2[i] -'0')  s.push_back('1');
   else s.push_back('0');
}
 
cout<<s;
    return 0;
}