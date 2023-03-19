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
        int n, d;
        cin >> n >> d;
        int ill = 0;
        if (d == 0)
        {
            ill = 1;
            cout << ill << endl;
        }

        else if (d <= 10)
        {
            int s = d;
            ill = 1;
            while (s--)
                ill *= 2;

            if (ill > n)
                cout << n << endl;

            else
                cout << ill << endl;
        }
        else
        {
            int s = 10;
            ill = 1;
            while (s--)
            {
                if (ill < n)
                    ill *= 2;
                else
                    break;
            }
            s = d - 10;
            while (s--)
            {
                if (ill < n)
                    ill *= 3;

                else
                    break;
            }
            if (ill > n)
                cout << n << endl;
            else
                cout << ill << endl;
        }
    }
    return 0;
}
