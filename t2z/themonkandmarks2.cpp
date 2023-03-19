#include <iostream>
#include <bits/stdc++.h> 
#include <map>
#include <unordered_map>

using namespace std;
int main()
{
    int t;
    cin >> t;
    multimap<int, string> m;
    for (int i = 0; i < t; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        m.insert({x, s});
    }
    auto cur_it = --m.end();
    while (true)
    {
        auto &stu = (cur_it->second);
        auto &marks = (cur_it->first);
        cout << stu << " " << marks << endl;
        if (cur_it == m.begin())
            break;
        cur_it--;
    }
}
