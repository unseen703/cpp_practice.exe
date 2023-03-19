#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;
int islucky(int n)
{
    string s = to_string(n);
    bool flg = true;
    for (auto c : s)
    {
        if (c != '4' && c != '7')
        {
            flg = false;
            break;
        }
    }
    return flg;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        for (int i = 44; i <= n; i++)
        {
            if (islucky(i))
            {
                if (n % i == 0)
                {
                    cout << "YES";
                    return 0;
                }
                else
                    continue;
            }
            else
                continue;
        }
        cout<<"NO";
    }
    return 0;
}