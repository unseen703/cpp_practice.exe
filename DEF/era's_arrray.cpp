#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define vi vector<int>

int main()
{
    fio int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
       
        int ans = INT_MIN;

        for (int i = 1; i < n + 1; i++)
        {
            int x;
            cin >> x;
          ans = max( ans, x-i);
            
        }
      cout<<ans<<endl;
    }
    return 0;
}