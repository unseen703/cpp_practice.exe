#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,sum = 0;
    cin >> k;
    int s[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> s[i];
    }

    sort(s, s + 12);

    if (k == 0)
    {
        cout << 0;
        exit(0);
        
    }
    if (k > accumulate(s, s +12, 0))
    {
       cout << "-1";
    }

    else 
    {
         int i=0;
        while (sum < k)
        {
           sum += s[11 - i];
           i++;
          // cout << sum<<" ";
        }
          cout << i;
    }
 
}