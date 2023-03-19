#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{  ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int r, St;
        cin >> r >> St;
        if (n >= s)
        {
            s += r;
        }
        else
            n += r;
         if (n >= s)
        {
            s += St;
        }
        else
            n += St;
        n>=s ?cout<<"N":cout<<"S";
        cout<<endl;
    }
    return 0;
}