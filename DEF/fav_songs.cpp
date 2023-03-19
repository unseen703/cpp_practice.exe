#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n],v[m];
    for (int i = 0; i < n; i++)
    {
        int c, t;
        cin >> c >> t;
        i == 0 ? a[i] = c * t : a[i] = a[i - 1] + c * t;
    }
for (int i = 0; i < m; i++)   cin>>v[i];
 int i = 0;
int j=0;
while(true)
{ 
    if (j == m || i == n)   break;
   if(a[i] >= v[j]){
       cout<<i+1<<endl;
       j++;
       continue;
   }
   else   i++;
}
    return 0;
}