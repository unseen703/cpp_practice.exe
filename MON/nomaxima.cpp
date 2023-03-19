
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define vi vector<int>
#define all(v) v.begin(), v.end()

main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        rep(i, 0, n)   cin >> v[i];
        int cnt = 0;
        rep(i, 1, n - 1)
        {
            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
    
                if ( i<= n-4 and v[ i + 2] > v[ i + 2 - 1] and v[ i + 2] > v[ i + 2 + 1])
                {
                    v[i + 1] = max(v[i], v[ i + 2]);
                    cnt++;
                }
                else if( v[i] > v[i - 1] and v[i] > v[i + 1])
                {
                    v[i + 1] = v[i];
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
        rep(i,0,n) cout<<v[i]<<" ";
        cout<<"\n";
    }
    return 0;
}