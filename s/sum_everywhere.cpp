#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string solve(string n)
{ 
    int sum = 0;
  for (int i = 0; i < n.size(); i++)
    sum+= n[i] - '0';
     n.clear();
    n= to_string(sum);
return n;
    }
int main()
{
    string k;
    cin >> k;
 
int cnt = 0;
while 
(k.size() >1)
{
   k = solve(k);
   cnt++;
}
k.clear();
cout<<cnt;
return 0;}
