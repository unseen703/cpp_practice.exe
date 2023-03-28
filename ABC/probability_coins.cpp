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
    cin.tie(0);                    \
    cout.tie(0)
 
typedef  long long   ll; typedef  pair<int, int>  pii;  typedef  vector<int>  vi;  typedef  vector<pii>  vpi; typedef map<int, int> mii;

double fun(int i , int cnt,int flg , int tar,  vector<double> &h, vector<double> &t, vector<vector<double>> &dp){
// if( i < 0) return 0.0;
// if( i+1 < tar- cnt )  
    // if(i == 0){
    //     if(cnt+1 >= tar ) return h[i];
    //     if(cnt>= tar) return t[i];
    //  return 0.000;
    // }
    if( i < 0) {
// cout<<cnt<<" " <<i<<"\n";
        return cnt >= tar? 1.000:0.000 ;
    }
    if(dp[i][cnt ]!= -1.000) return dp[i][cnt];
   double tail =  fun(i-1, cnt, 1, tar, h, t, dp)*t[i];

   double head =  fun(i-1, cnt+1,0, tar, h,t, dp)*h[i];

return   dp[i][ cnt] = head + tail;
}

int main()
{
 
fio;
    //int t = 1;//
 
   int n;
    cin >>n;
    vector<double> h(n), t(n);
    rep(i, 0 ,n){
     cin>>h[i];
     t[i] = 1-h[i];
        // cout<<h[i]<<" "<<t[i]<<"\n";
   
     }

    int tar = (n+1)/2;
    
    vector<vector<double>> dp(n+1, vector<double>(n+1, -1.00));

    cout<<setprecision(11)<< fun(n-1, 0, 0, tar, h, t, dp);
    return 0;
}