#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, st, e) for (int i = st; i < e; i++)

int main()

{
    // int arry[20] = {5, 10, 2, 3, 56, 87, 7, 24, 34, 57, 68, 9, 10, 28, 23, 7, 8, 9, 30, 57};
    int search ;
    int n;
    cin>>n>>search;
    int a[n];
    unordered_set<int> s;
    rep(i,0,n){ int x;
         cin>>x;
         s.insert(x);
    }
bool flg = false; 
  rep(i,0,n)
        if ( s.find(search) == s.end()) flg = true;
flg?cout<<flg:cout<<"-1";
    return 0;
}
