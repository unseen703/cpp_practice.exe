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

int generate(int n)
{
    vector<string> v;
    queue<string> q;
    q.push("4");
    q.push("7");
    string s = to_string(n);
   while(true)
    {  v.push_back(q.front());
         // because next 2 string will be sum of previous element either  + 4 or + 7
         if(v.back() == s) break;
        q.push(v.back() + "4");
        q.push(v.back() + "7");
        q.pop(); }
    return v.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
 int ans = generate(n);
    cout<< ans ;
    return 0;
}