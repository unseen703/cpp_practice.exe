#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p, h;
        cin >> p >> h;
        int n = p.size();
        bool flg = true;
        sort(p.begin(),p.end());
        if (n > h.size())
            flg = false;
        else
        { int in = 0,count =0;
            // map<char, int> m1, m2;
            // for (int i = 0; i < h.size(); i++)
            // {
            //     m2[h[i]]++;
            // }
            // for (int i = 0; i < p.size(); i++)
            // {
            //     m1[p[i]]++;
            //      if (m1[p[i]] > m2[p[i]])
            //     {
            //         flg = false;
            //     }
            // }

            while (in <= h.size() -( p.size()-1))
            {   string s;
                for(int i = in; i< in + n; i++)
                s.append(1,h[i]);
             sort(s.begin(),s.end());
             if (s.compare(p)== 0)
             {  count++;
                 break;
             }
             in++;
               
            }
            count?:flg = false;
        }
        flg?cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}