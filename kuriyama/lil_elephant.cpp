#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  cin>>n;
  int a[n];
  int mn =INT_MAX;
  int in = 0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if(a[i]<mn){
        mn = a[i];
        in = i;
    }

}

for (int i = 0; i < n; i++)
{
    if(mn == a[i] && in != i){
    cout<<"Still Rozdil";
    return 0;
    }
}
cout<<in+1;
    return 0;
}