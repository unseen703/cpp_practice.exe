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
#define strt(v) v.begin()
//#define end(v) v.begin()

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vi a(n);

       rep(i,0,n){ cin>>a[i]; a[i] = (i+1) - a[i];}
        // bool flg = true;
        auto it = find(all(a), 0);// o(n)
        if (it == a.end())
        {
            cout << 0 << "\n";
            continue;
        }
        auto end = a.end();
        int k = -1;
        auto start = it;
        while (it != end) //O(n)
        {
          
            it = find(it, end, k); //O(n)
            if (it == a.end())
                break;
            k--;
        }
        cout << k * (-1) << "\n";
    }
    return 0; 
}
// O(n^2);