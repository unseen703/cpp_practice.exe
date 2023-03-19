#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization("unroll-loops")
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define BSet_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef map<int, int> mii;

// void DKK()
// {
//   int n ;
//   cin>>n;
//   vi h(n);
//   rep( i , 0  ,n) cin>>h[i];
//   sort(all(h));


// int cnt = 0;
// int cnt_1 = 0;
// rep( i , 0 , n)if(h[i] == 1) cnt_1++;
// // cout<<cnt_1<<"\n";
//         cnt += cnt_1/2 +cnt_1%2 + (n - cnt_1);
     
// cout<<cnt<<"\n";

// }

void DKK()
{
  ll a1, a2, a3, a4 ;
  cin>>a1>>a2>>a3>>a4;
ll cnt = a1;
if(a1 == 0 && a2 == 0&& a3 == 0 && a4 == 0 )  {cout<<"0\n"; return;}
if(a1 == 0) {cout<<" 1 \n"; return;}
  ll a = a1, b = a1;
  int left = a1+a2+a3+a4;
  left -= a1;
  int x =0;
  while( left && ((a> 0 && a3) || (b> 0 && a2) || (a && b && a4))){
  int mn = INT_MAX;
  if(a1  && a2&& a3){
    mn = min(a2, a3);
    if(mn == a2){
      b = 2*a1;
      a = 0;
    }
    else{
      a = 2* a1;
      b = 0;
    }
    a1 = 0;
  
    a2 -= mn;
    a3 -= mn;

    cnt += mn;
    left -= mn;
  }
   else
    if(a && a3) {
   
    mn = min(a, a3);

    a-=mn;
    a3-=mn;
    b+= mn;

    }
    else if(b && a2){
  
    mn = min(b, a2);
   
    b-=mn;
    a2-=mn;
    a+= mn;
  
    }
    else if( !a2 && !a3 && a4){
       
    mn = min(a, min(b, a4));
    b-=mn;
    a4-=mn;
    a-= mn;
  
    }
    else break;
  x++;
  cout<<a2<<" "<<a3<<" "<<a4<<"\n";
  cnt+= mn;
    left-= mn;
  }
// cout<<x<<"\n";
if(left >0)cnt++;
  cout<<cnt <<"\n";
 

}
// void DKK()
// {
//   int n ;
//   cin>>n;
//   vi h(n);
//   rep( i , 0  ,n) cin>>h[i];
//   if(h[0] == 1){
//     int i = 2;
//     while( i <= n){
        
//     }
//   }
// int last = *(upper_bound(all(h), h[n-1]))



// int cnt = 0;
// int cnt_1 = 0;
// rep( i , 0 , n)if(h[i] == 1) cnt_1++;
// // cout<<cnt_1<<"\n";
//         cnt += cnt_1/2 +cnt_1%2 + (n - cnt_1);
     
// cout<<cnt<<"\n";

// }
int main()
{
    fio;
    // fillsieve();
    // for(int i = 3; i <N)
    int t = 1;
    cin >> t;
    while (t--)
    {
        DKK();
    }

    return 0;
}



