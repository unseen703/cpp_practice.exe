#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        int  mx = INT_MIN;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        { int x;
            cin >> x;
            m[x]++;
            mx = max(mx, x);
        }
 
        int c = l, mxarea = INT_MIN;
        while (c <= mx)
        {
            int count = 0;
            for (auto p : m)
            {
                if (p.first >= c)
                    count += p.second * (p.first / c);
            }
            mxarea = max(mxarea, count * c);
            c++;
        }
     
        if (mxarea <= 0)
        {
            cout << "0";
        }
        else
            cout << mxarea;
    }
}
   //       for (int i = 0; i < n; i++)
        //     {
        //         cin >> arr[i];
        //         mx = max(mx, arr[i]);
        //     }
        //    // cout<<mx;
        //     int  c = l,mxarea =INT_MIN;
        //     while (c <= mx)
        //     { int count = 0;
        //         for (int i = 0; i < n; i++)
        //         {
        //             if (arr[i] >= c)
        //                 count+=arr[i]/c;
        //         }
        //        // cout<<count;
        //         mxarea = max(mxarea,count*c );
        //         c++;
        //     }