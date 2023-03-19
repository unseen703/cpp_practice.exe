#include <iostream>
#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
using namespace std;
#define ll long long

int main()
{
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
string s1;
    rep(i, 0, s.size())
    {
        if (s[i] == 'r')
            cout << i + 1 << "\n";
    }
    for (int i = s.size() - 1; i >= 0; i--){
        if (s[i] == 'l')
            cout << i + 1 << "\n";}
}
