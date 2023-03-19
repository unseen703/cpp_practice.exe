#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  //   int a[2*n];

  if (k == n - 1)
for (int i = n; i > 0; i--) cout << i << " ";
 else
  {
    for (int i = n; i > n-k; i--) cout<<i<<" ";
    for (int i = 1; i<= n-k; i++)  cout<<i<<" "; 
  }
  return 0;
}