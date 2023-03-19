#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;
    unordered_map<string, string> F1;
    while (m--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() > s2.size())
        {
            F1[s1] = s2;
        }
        else
        {
            F1[s1] = s1;
        }
    }

    for (int j = 0; j < n; j++)
    { string s;

        cin >> s;
        cout<< F1[s]<<" ";
    }

    
}