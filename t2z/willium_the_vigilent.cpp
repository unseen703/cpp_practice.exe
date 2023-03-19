#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define DIPAK                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vi vector<int>

int main()
{
    DIPAK
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    int cnt = 0;
    rep(i, 0, max( n - 2 , 0))
    {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
            cnt++;
    }
    //  cout<<cnt<<" ";
   
        rep(i, 0, q)
        {
            int p;
            char c;
            cin >> p >> c;
            // s[p] = c;
            p--;
// if (n < 3){        cout << 0 << "\n"; continue; }
            rep(j, max(0, p - 2), min(n - 1, p + 1))
            {
                if (s[j] == 'a' && s[j + 1] == 'b' && s[j + 2] == 'c')
                {
                    cnt--;
                    //  cout<<cnt<<" ";
                }
            }
            s[p] = c;
            rep(j, max(0, p - 2), min(n - 1, p + 1))
            {
                if (s[j] == 'a' && s[j + 1] == 'b' && s[j + 2] == 'c')
                {
                    cnt++;
                    // cout<<cnt <<" ";
                }
            }
            cout << cnt << "\n";
        }
    

    return 0;
}