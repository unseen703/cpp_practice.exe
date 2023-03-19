// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define rrep(i, a, b) for (int i = a; i >= b; i--)
// #define input(arr,n) for (int i = 0; i < n; i++) cin>>a[i];

// #define ll long long
// #define mp(x, y) make_pair(x, y)
// #define pb(x) push_back(x)
// #define se second
// #define fi first
// #define all(v) v.begin(), v.end()
// #define vi vector<int>
// #define pii pair<int, int>
// #define mii map<int, int>
// #define Set_Cnt(x) __builtin_popcount(x)
// #define prtNO cout << "NO\n"
// #define prtYES cout << "YES\n"
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)


// // cout << "Case #" << i << ": " <<  << endl;
// // never ever use endl until asked


// void solve()
// {
//     string a,b;
//     cin >> a>>b;

// if(a == b) {
// prtYES;
//     return;
// }
// else if( a.size() != b.size()) {prtNO; return;}
// else{
//     int cnt = 0;

//     rep(i, 0, a.size()){
//         if(a[i] != b[i]) cnt++;
//         if(cnt > 2){
//             prtNO; return;
//         }
//     }
//      sort(all(a) );
//     sort(all(b));
//     if( a == b && cnt <= 2 ) {
//         prtYES;
//         return;
//     }
//     prtNO;
// }
    
// }


// int main()
// {

//     int t;
//     // cin >> t;
//     t = 1;
//     while (t--)
//     {
// solve();
       
//     }

//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(arr,n) for (int i = 0; i < n; i++) cin>>a[i];

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
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)


// cout << "Case #" << i << ": " <<  << endl;
// never ever use endl until asked

void solve()
{
    int n,t,k,d;
    cin >> n>>t>>k>>d;
 
int tr = (n + k -1)/k *t;
 
if(tr > t +d ){ prtYES; return ;}
prtNO;
}
 


int main()
{
fio;
    // int t;
    // cin >> t;
    // t = 1;
    // while (t--)
    // {
solve();
       
    // }

    return 0;
}
