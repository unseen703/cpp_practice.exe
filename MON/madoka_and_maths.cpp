#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
using ll = long long;

#define pii pair<int, int>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define se second
#define fi first

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void generate()
{
    int n;
    cin >> n;
    int x = n % 3;
    if (x == 1)
    {
        string s;
        rep(i, 0, n / 3)
        {
            s.push_back('1');
            s.push_back('2');
        }
        s.push_back('1');
      cout<<s<<endl;
    }
    else {
          string s;
        rep(i, 0, n / 3)
        {
            s.push_back('2');
            s.push_back('1');
        }
        if(x)
        s.push_back('2');
       cout<<s<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        generate();
    }
  
    return 0;
}