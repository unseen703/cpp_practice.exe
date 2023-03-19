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

int main()
{ fio;
    int t;
    cin >> t;

    while (t--)
    {

       int a,b,x,y;
       cin>>a>>b>>x>>y;
       if(x*y/b >= a) cout<<"Yes\n";
       else cout<<"No\n";

    }
    return 0;
}