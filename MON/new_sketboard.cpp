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

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fio;

    int n;
    string s;
    cin >> s;
    n = s.size();


    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = (s[i] - '0');
        if (digit % 4 == 0)
            ans++;
        if (i > 0)
        {
            int tplace = s[i - 1] - '0';
            if ((tplace * 10 + digit) % 4 == 0)    // modify answer by i beacause we can find such i number whose last digits are divisible by 4 
                ans += i;
        }
    }
    cout<<ans<<endl;
    return 0;
}