#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin>>s;
    sort(s.begin(), s.begin() + n);
    sort(s.begin() + n, s.end());
    bool flg1 = true;
    // bool flg2 = true;
    for (int i = 0; i < n; i++)
    {  if (!(s[i] -'0' < s[i + n]-'0'))
        {  flg1 = false;
            break; }   }
    if (flg1)   cout << "YES";
    else
    { 
        // cout<<2;
        flg1 = true;
        for (int i = 0; i < n; i++)
        { if (!(s[i] -'0' > s[i + n] -'0')) {
                flg1 = false;
                break; }  }
        if (flg1)   cout << "YES";
        else   cout<<"NO";
    }
    return 0;
}