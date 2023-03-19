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
    int n, x;
    cin >> n >> x;
    int a[n];
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    int oddc = 1, minn = min(odd, x);
  //  cout << odd << " " << even;
    bool flg = true;
    while (odd)
    {
       if (oddc > minn)
            break;
        if (even >= x - oddc)
        {
            cout << "Yes\n";
            flg = false;
            break;
        }
        
        oddc += 2;
    }
    if (flg)
        cout << "No\n";
     }
}
