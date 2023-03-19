#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == 'B' && s[i + 1] == 'B') || (s[i] == 'R' && s[i + 1] == 'R') || s[i] == 'G' && s[i + 1] == 'G')
        {
            count++;
        }
    }
    cout << count;
}
