#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio   ios_base::sync_with_stdio(false);     cin.tie(NULL);   cout.tie(NULL)
#define vi vector<int>

int main()
{
    fio;
    int n; cin >> n;
    string s, s1;  cin >> s;
    s1 = s;
    if (count(s.begin(), s.end(), 'W') == 0 || count(s.begin(), s.end(), 'B') == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        vi v;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != 'W')
            {
                s[i] = 'W';
                s[i + 1] == 'B' ? s[i + 1] = 'W' : s[i + 1] = 'B';
                v.push_back( i);
               
            }
        }
        if (s[n - 1] != 'W')
        {
            vi w;
            for (int i = 0; i < s1.size() - 1; i++)
            {
                if (s1[i] != 'B')
                {
                    s1[i] = 'B';
                    s1[i + 1] == 'B' ? s1[i + 1] = 'W' : s1[i + 1] = 'B';
                      w.push_back(i);
                   
                }
            }
            if (s1[n - 1] == 'W')
            {
                cout << -1 << "\n";
                return 0;
            }
            else
            {
                cout << w.size() << "\n";
                rep(i,0,w.size()){ 
                    cout << w[i] + 1 << " ";}
                cout << "\n";
                return 0;
            }
        }
        else
        {
            cout << v.size() << "\n";
            for (int i= 0; i<v.size(); i++)
                cout << v[i] + 1 << " ";
            cout << "\n";
        }
    }

    return 0;
}