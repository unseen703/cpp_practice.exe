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
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        // vector<vector<int>> v;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
      
      
        bool flg = true;
        // int Cnt_E =0;
        // int Cnt_O =0;
ll sum = 0;
        rep(i, 1, n-1)
        {
            if (a[i]&1)
            {
            //   Cnt_O++;
              sum += (a[i] +1)/2;
            }
            else{
            sum+=a[i]/2;
            }

            //if(Cnt_E == 0 && Cnt_O >0) { flg = false; break;}
        }
        if(count(a.begin() +1, a.end() -1, 1)  == n-2  ||(n== 3 && a[1]%2) ) flg = false;
         if(flg) cout<<sum<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}