#include <iostream>
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
#define ll long long
#define DIPAK                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    DIPAK
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        //   char c =  s[0
        string s1;
        s1.push_back(s[0]);

        rep(i, 1, n)
        {
            if (s1.size() == 1)
            {
                if (s1.back() > s[i])
                    s1.push_back(s[i]);
                else
                    break;
            }
            else if (s1.size() > 1)
            {
                if (s1.back() >= s[i])
                    s1.push_back(s[i]);

                else
                    break;
            }
        }

        rep(i, 0, s1.size()) cout << s1[i];
        for (auto it = s1.rbegin(); it != s1.rend(); it++)
            cout << *it;
        cout << endl;
    }
}
