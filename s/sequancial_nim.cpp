#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define vi vector<int>

#define fio    ios_base::sync_with_stdio(false);    cin.tie(NULL);    cout.tie(NULL)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        // ll x = 19;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int pre = 0, pre1 = 0;
        int c1 = 0;
        rep(i, 0, n)
        {
            if (a[i] == 1 && (pre == 2 || i == 0))
            {
                c1++;
                pre = 1;
            }
            else if (a[i] == 1 && pre == 1)
            {
                c1++;
                pre = 2;
            }
            else if (a[i] > 1 && (pre == 2 || i == 0))
            {
                pre1 = 1;
                break;
            }
            else if (a[i] > 1 && pre == 1)
            {
                pre1 = 2;
                break;
            }
        }
        if (pre1)
        {
            pre1 == 1 ? cout << "First\n" : cout << "Second\n";
        }
        else
        {
            c1 % 2 == 1 ? cout << "First\n" : cout << "Second\n";
        }
    }
}