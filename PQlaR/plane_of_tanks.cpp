#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        m[s] = max(x,m[s]);
    }
    int N = m.size();
    for (auto &p : m)
    {
        int C = 0;
        for (auto &j : m)
        {
            if (p.second >= j.second)
            {
                C++;
            }
        }
        if (C * 100 >= N * 99)
            cout << p.first << " "<< "pro" << endl;
        else if (C * 100 >= N * 90)
            cout << p.first << " "<< "hardcore" << endl;
        else if (C * 100 >= N * 80)
            cout << p.first << " "<< "average" << endl;
        else if (C * 100 >= N * 50)
            cout << p.first << " " << "random" << endl;
        else
        {
            cout << p.first << " "<< "noob" << endl;
        }
    }

    return 0;
}