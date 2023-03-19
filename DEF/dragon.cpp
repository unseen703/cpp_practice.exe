#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j = 0, n,s;

    cin >> s >> n;

   multimap<int, int> m;

    for (int i = 0; i < n; i++)
    { int x,y;
    cin>> x>>y;
        m.insert({x,y});
    }
    
    for (auto v : m)
    {

        if (s > v.first)
        {
            s += v.second;
            j++;
        }
    
      
        
    }
    if (j == n)
    {
      cout<<"YES";
    }
    else
    {
        cout <<"NO";
    }
    
}