
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

//------------------------------------------------------------------------------->lets start<----------------------------------------------------------------------------------------


int fun(int i , int j , string &s1, string &s2, vector<vector<int>> &dp){
    if(i < 0 || j < 0 ) return 0;

    if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        
    if(s1[i] == s2[j]){
          ans =   fun(i-1, j-1, s1, s2, dp) +1;
    }
    else{
      
        int l1 = fun(i-1, j , s1, s2, dp);
        int l2 = fun(i, j-1, s1,s2, dp);
        ans=  max(l1, l2);
    }

return dp[i][j] = ans;

}



string  prtLCS(string x, string y ,int i, int j , vector<vector<int>> &dp){
  if(i < 0 || j <0) 
    return "";
  if(x[i]  == y[j])   
    return x[i] + prtLCS(x, y , i-1, j-1, dp);
  // if(i <= 0 || j <= 0) return "";
  
     int l1 = -1, l2 = -1;
     if(i> 0 )
         l1 = dp[i-1][j];
     if(j > 0 )
         l2 = dp[i][j-1];
         
    if(l1 > l2 )
       return prtLCS(x,y,i-1,j, dp);
    return prtLCS(x,y,i, j-1, dp);
  }



void DKK()
 { 

 string x, y;
cin>>x>>y;
vector<vector<int>> dp(x.size()  +1,vector<int>(y.size() +1, -1));
ll ans = 0 ;
int l = fun(x.size() -1, y.size() -1, x, y, dp);
string t = prtLCS( x,  y, x.size() - 1, y.size()- 1, dp);

reverse(all(t));
cout<<t<<"\n";
 }

int main()
{
 fio;
    int t = 1;

    while (t--)
    {
       DKK ();
    }

    return 0;
}
