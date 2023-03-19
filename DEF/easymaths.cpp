#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<char> v;
    int count = 0;
    for (int i = 0; i < s.size(); i++){
    
        if (s[i] == '1' || s[i] == '2' || s[i] == '3')
        {
            v.push_back(s[i]);
        }
    }
    auto it1 = v.begin();
auto it2 = --v.end();
    sort(it1,v.end());
    for (auto it = it1; it <it2; it++)
    {
        cout << *it << "+";
    }
  cout << *(--v.end());
}
