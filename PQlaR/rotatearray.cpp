#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n >>d;
        int a1[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a1[j];
        }
        for (int s = d; s < n; s++)
        {
        
            cout << a1[s]<<" ";
        }
        for (int j = 0; j < d; j++)
        {
            /* code */
            cout << a1[j]<<" ";
        }
        cout << endl;
   }
}