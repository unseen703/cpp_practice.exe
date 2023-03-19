#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
     int n;
    cin >> n;
    vector<int> v;
    unordered_map< int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        m[v[i]] = i;
    }
    int query;
    cin >> query;
    ll cvs = 0, cpt = 0;
    for ( int j = 0; j < query; j++)
    {
         int x;
        cin >> x;

       int i = m[x];

        cvs += (ll)i + 1LL;
        cpt += (ll)n - (ll)i;
    }
    cout << cvs << " " << cpt;
}