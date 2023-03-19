 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio                         ios_base::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define vi vector<int>

 int coinChange(vector<int>& coins, int amount) {

        sort(coins.begin(), coins.end(), greater<int>());
    if (amount == 0)
    {
        cout << 0;
        return 0;
    }
    else if (amount % coins.back())
    {
        cout << -1;
        return 0;
    }
    int ans = 0;
    for ( int i: coins)
    {
        ans += amount / i;
        amount -= (amount / i) * i;
     
    }

    cout << ans;

    }
