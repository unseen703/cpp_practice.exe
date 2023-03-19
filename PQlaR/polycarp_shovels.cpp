#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = INT_MIN, b = 1, k;
        cin >> n >> k;
        int s = (int)sqrt(n);
        for (int j = 1; j <= s; j++)
        {
            if (n % j == 0 && j <= k)
            {
                a = max(a, j);
                if (n / a <= k)
                {
                    int y = n / a;
                    a = max(y,a);
                }
            }
        }
        
        b = n / a;

        if (a * b == n)
        {
            cout << b << endl;
        }
    }
    return 0;
}
