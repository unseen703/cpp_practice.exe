#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0, n,s;

    cin >> s >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin << x << y;

        m[x] = y;
    }
    for (auto v : m)
    {

        if (s > v.first)
        {
            s += v.second;
            i++;
        }
        else
        {
            cout <<"NO";
        }
        
    }
    if (i == n)
    {
      cout <<"YES";
    }
    
}