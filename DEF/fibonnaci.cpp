#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &v, int *i, int *cnt)
{

    if (v[*i] == v[*i - 1] + v[*i - 2]  &&  *i <v.size())
    {
        *cnt += 1;
        *i += 1;
        // cout<< *i;
        solve(v, i, cnt);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
   { 
             int x;
           cin>>x;
       v.push_back(x);
// cin>>v[i];
    }
    if (n == 1 || n == 2)
        cout << n;
    else
    {
        int i = 2;int cn = INT_MIN;
        while (i < n)
        {
            int cnt = 2;
            solve(v, &i, &cnt);

             i += 1;
            cn = max(cn,cnt) ;
        }
        cout<<cn;
    }
    
}