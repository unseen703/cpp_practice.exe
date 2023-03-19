#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int A[n], B[n];
        for (int j = 0; j < n; i++)
        {
            cin >> A[j];
        }
        for (int j = 0; j < n; i++)
        {
            cin >> B[j];
        }
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < count; k++)
            {
                if ((A[j] ^ B[k]) & x == (A[j] ^ B[k]) & y)
                {
                    count++;
                }
            }
        }
        cout << count;

    }
}