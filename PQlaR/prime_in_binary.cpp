#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    //   t= 1;
    while (t--)
    {
        int n;
        
        bool flg = true;
        string s;
        cin >> s;
        n = s.size();
        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {

            for (int i = 1; i < n; i++)
            {
                if (s[i - 1] == '1')
                {
                    if (s[i] == '1' || s[i] == '0')
                    {
                        cout << "yes" << endl;
                        flg = false;
                        break;
                    }
                }
            }
            if (flg)
            {
                cout << "NO" << endl;
            }
        }
    }
}