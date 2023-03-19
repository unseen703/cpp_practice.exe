#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, d = 0;
    cin >> n;
    int a1[n];
    for (int j = 0; j < n; j++)
    {
        cin >> a1[j];
    }

    unordered_map<int, int> m;
    for (int j = 0; j < n; j++)
    {
        m[a1[j]]++;
    }
    for (auto it : m)
    {
        if (it.second > 1)
        {
            v.push_back(it.first);
        }
    }
    if (v.size() == 0)
    {
        v.push_back(-1);
        return v;
    }
    else
        return v;
}