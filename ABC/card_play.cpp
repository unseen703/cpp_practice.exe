#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        m[x]++;
    }

    if (m[0] == 0)
    {
        cout << "-1";
    }
    else if (m[5] < 9)
    {
        cout << "0";
    }
    else if (m[5] >= 9)
    {
        int c = 9 * (m[5] / 9);
        for (int i = 0; i < c; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < m[0]; i++)
        {
            cout << 0;
        }
    }
}