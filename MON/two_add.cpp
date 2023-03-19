#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define vi vector<int>

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fio;
    int t;
    cin>>t;
    while (t--)
    {

        string s;
        cin >> s;
     
        char c;
        cin >> c;
        bool ans = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
            else cout<<"NO\n";
    }
    return 0;
}