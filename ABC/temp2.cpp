#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(arr, n)           \
    for (int i = 0; i < n; i++) \
        cin >> a[i];

#define ll long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define Set_Cnt(x) __builtin_popcount(x)
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// cout << "Case #" << i << ": " <<  << endl;
// never ever use endl until asked

int reverse(int x)
{
    string s = to_string(x);
    int rev = 0, temp;
    if (s.length() <= 10 && x < 0)
    {
        while (x)
        {
            int pop = x % 10;
            x = x / 10;

            temp = rev * 10 + pop;
            rev = temp;
        }
    }
    else if (s.length() <= 9 && x > 0)
    {
        while (x)
        {
            int pop = x % 10;
            x = x / 10;

            temp = rev * 10 + pop;
            rev = temp;
        }
    }
    else
    {
        while (x)
        {
            int pop = x % 10;
            x = x / 10;
            if (rev > (INT_MAX / 10) || (rev == (INT_MAX / 10) && pop > 7))
            {
                return 0;
            }
            else if (rev < (INT_MIN / 10) || (rev == (INT_MIN / 10) && pop <= -8))
                return 0;
            else
            {
                temp = rev * 10 + pop;
                rev = temp;
            }
        }
    }
    return rev;
}
int main()
{

    //    cout<< INT_MAX + 7 <<" ";
    cout << reverse(-2147483643);
    // int r = INT_MAX / 10;
    // cout << r * 10 + 8;
    return 0;
}
