#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 100;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  for (int i = 0; i < n; i++)
  {
     int x;
     cin>>x;
     if(x!= v[i]){
         cout<<x <<"at "<<i+1<<"NEEDED"<<v[i];
         return 0;
     }
  }
  
    return 0;
}