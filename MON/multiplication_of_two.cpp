/*#include <iostream>
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
        int n, a = 1 , b = 1, c = 1;
        cin >> n;
    bool flg =true;
     int s = (int)sqrt(n);
        for (int j = 1; j < s; j++)
        {
            if (n % j == 0 && j != 1 && flg)
            {
                a =j ;
                flg = false;
            }

            if (a != 1)
            {
                if ((n / a) % j == 0 && j != a )
                {
                    b = j;
                    break;
                }
                else
                    b = INT_MIN;
            }
        }

        c = n / (a * b);
        if ( b == INT_MIN || a == 1 || b == 1)
            cout << "NO" << endl;
        else if (c != 1 && c != a && c != b && c != 0 && a * b * c == n)
        {
            cout << "YES" << endl
                 << a << " " << b << " " << c << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}*/
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
        int n, a = 1, b = 1, c = 1;
        cin >> n;
       // bool flg = true;
        int s = (int)sqrt(n);
        for (int j = 1; j < s; j++)
        {
            if (n % j == 0 && j != 1 )
            {
                a = j;
               // cout<<a <<" ";
                // flg = false;
                break;
            }
        }
        if (a != 1)
        {
          //  s = (n / a)/2;
            for (int j = 1; j < s; j++)
            {

                if ((n / a) % j == 0 && j != a && j != 1)
                {
                    b = j;
                //    cout<<b<<" ";
                    break;

                }
 

            }
        }
        c = n / (a * b); // cout <<c;
        if (a == 1 || b == 1)
            cout << "NO" << endl;
        else if (c != 1 && c != a && c != b && c != 0 && a * b * c == n)
        {
            cout << "YES" << endl
                 << a << " " << b << " " << c << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
