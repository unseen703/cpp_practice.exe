#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define Set_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     // sort(all(s));
//     vi v(n);
//     rep(i, 0, n)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     int cnt = 0;
//     int flg = -1;
//     int sum = 0;
//     rep(i, 0, n)
//     {

//         if (sum + v[i] >= k)
//         {
//             flg = i;
//             break;
//         }
//         sum += v[i];
//         cnt++;
//     }
//     if (flg == -1)
//     {
//         cout << n << endl;
//         return;
//     }
//     else
//     {

//         int i = (v[flg] % 2) ? v[flg] / 2 + 1 : v[flg] / 2;
//         if (i + sum <= k)
//             cnt++;

//         cout << cnt << endl;
//     }
//     return;
// }

// void GFTSHP(){
//     int n,k;
//     cin>>n>>k;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     sort(a,a+n);

//     int flag = -1;
//     int count = 0;
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (sum + a[i] >= k)
//         {
//             flag = i;
//             break;
//         }

//         sum+=a[i];
//         count++;
//     }

//     if (flag == -1)
//     {
//         cout<<n<<endl;
//     }

//     else
//     {
//         if (a[flag]%2 == 0)
//         {
//             if (a[flag]/2 +sum<=k)
//             {
//                 count++;
//             }
            
//         }
//         else
//         {
//             if (a[flag]/2 + sum + 1<=k)
//             {
//                 /* code */
//                 count++;
//             }
            
//         }
        
//         cout<<count<<endl;
//     }
    
    
    
    
// }
int main()
{
    fio;
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // sort(all(s));
        int v[n];
        rep(i, 0, n)
        {
            cin >> v[i];
        }
        sort(v,v+n);
        int cnt = 0;
        int flg = -1;
        int sum = 0;
        rep(i, 0, n)
        {

            if (sum + v[i] >= k)
            {
                flg = i;
                break;
            }
            sum += v[i];
            cnt++;
        }
        if (flg == -1)
        {
            cout << n << endl;
        }
        else
        {

            int i = (v[flg] % 2) ? v[flg] / 2 + 1 : v[flg] / 2;
            if (i + sum <= k)
                cnt++;

            cout << cnt << endl;
        }
    }

    return 0;
}