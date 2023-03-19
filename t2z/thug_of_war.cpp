#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
   long long  str = 1;
    for (int i = 0; i < s.size(); i++)
    {
         for (int j = i+1; j < s.size(); j++)
       str = str  *abs(s[i] - s[j]);
    }
 cout<< str;
}
