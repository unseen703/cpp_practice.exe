#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int l = s.size();
        bool flg = false;
        rrep(i, l - 1, 1)
        {
            int sum = (s[i] - '0') + (s[i - 1] - '0');
            if (sum < 10)
                continue;
            flg = true;
            s[i - 1] = '1';
            s[i] = '0' + sum % 10;
            cout << s<<"\n";
            break;
        }
        if (!flg)
        {
            int sum = s[0] - '0' + s[1] - '0';
            s.erase(s.begin());
            s[0]= '0' + sum;
            cout<<s<<"\n";
        }
    }
    return 0;
}