#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    unordered_set<int> v;
  int  mx1 =  INT_MIN;
    for (int i = 0; i < n; i++)
    { int x;
    cin>>x;
     v.insert(x);
     mx1 = max(x,mx1);
    }
    if (v.size() == 1)
    {
      cout<<mx1*mx1;
      return 0;
    }
    
   v.erase(mx1);
  int mx2  =  *max_element(v.begin(),v.end());
cout<< mx1*mx2;
    return 0;
}