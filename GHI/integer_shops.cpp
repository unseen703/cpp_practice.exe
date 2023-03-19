#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int MinL, MaxR, Cost;
        int precost;
        bool flg = true;
        for (int i = 0; i < n; i++)
        {
            int l, r, c;
            cin >> l >> r >> c;
            if (flg)
            {
                MinL = l;
                MaxR = r;
                Cost = c;
                precost = c;
                flg = false;
            }
            if (MinL < l && MaxR > r)
                continue;
           else if (MinL == l && MaxR == r && c < Cost)
            {
                Cost = c;
                precost=c;
            }
            else if (MinL > l && MaxR < r)
            {
                Cost = c;
                MinL = l;
                MaxR = r;
                precost =c;
            }
            else if (MinL >= l )
            {  MinL = l;
                Cost += c;
                precost = c;
                
            }
            else if (MaxR <= r)
            {  
                MaxR = r;
                Cost += c;
                precost = c;
               
            }
            
            cout<< Cost<<endl;
        }
    }
}
