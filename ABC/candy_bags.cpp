#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n/2*(n-1) + 1; i+=n/2)
    { int k = i;
      for(int j = 0; j< n/2; j++)
        cout<<k+j<<" ";
        int m= n*n-i +1;
      
    for(int j = 0; j< n/2 ; j++)
    cout<<m-j<<" ";
        cout<<"\n";
    }

  
}