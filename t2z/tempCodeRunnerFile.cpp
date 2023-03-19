#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;
// int islucky(int n){
//     string s = to_string(n);
//     bool flg = true;
//     for(auto c :s){
//         if(c != '4' && c != '7'){
//         flg = false;
//         break;
//         }
//     }
//     return flg;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  cin>>n;
 int a[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777 };

for (auto i :a)
{
      if (n%i == 0)
      {
        cout<<"YES";
        return 0;
      }
      else continue;
}
cout<<"NO";
    return 0;
}