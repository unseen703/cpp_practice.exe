#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio                         ios_base::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define vi vector<int>

int main()
{
    fio int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vi v(n);
        rep(i, 0, n){ cin >> v[i]; }
        int i = 0;
        while (!v.empty())
        {
            int cnt = v.size();
            for (int i = v.size() - 1; i >= 0; i--)
            {
                if (v[i] % (i + 2))
                    v.erase(v.begin() + i);
    // cout<<v[i]<<" ";
            }
            if (v.size() == cnt)
                break;
        }
        if (!v.empty())
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}