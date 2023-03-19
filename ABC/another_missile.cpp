#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
     vector<double> p(n);
     vector<int> v(n);
    for (int i = 0; i < n; i++)
    cin>>p[i];
 for (int i = 0; i < n; i++)
    cin>>v[i];
 double q= 0;
     for (int i = 0; i < n; i++){
         if(v[i] < k){
             p[i] =0;
             continue;
         }
         q +=p[i];
     }
    
     for (int i = 0; i < n; i++)
    cout<<p[i]/q<<" ";

 
}