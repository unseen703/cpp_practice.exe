#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 void solve(vector<int> &v,int i,int k){

    if (v.size() == 1) return;
    //  cout<<v[i];
    i = (i+k-1)%(v.size());
    v.erase(v.begin() + i);
 solve(v,i,k);
 }
int main()
{
    int n,k;
    cin>>n>>k;
     vector<int> v ; 
    for (int i = 0; i < n; i++)
    {

        v.push_back(i+1);
    }
    //   if(v.size() == 1) return;
    // int i = 0;
    // while (v.size() != 1)
    // {
    // i = (i+k-1)%(v.size());
    // v.erase(v.begin() + i);}
solve( v ,0,k);
 cout<<v[0];

}
