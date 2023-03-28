#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>dp(1005,vector<int>(1005,-1));
char arr[1005][1005];
int ans;
int m,n;

long long mod = 1e9+7;

long long fn(int x,int y)
{
    if(x>=m+1 || y>=n+1 || arr[x][y]=='#')
     return dp[x][y]=0;
     
    
     
     
    if(x==m && y==n)
    return dp[x][y]=1;
    
    
    if(dp[x][y]!=-1)
    return dp[x][y];
    long long left = 0 , up =0;
    // if(x+1 <= m)
    left = fn(x+1, y);

    // if(y+1 <= n)
     up = fn(x, y+1);
    

    dp[x][y]=(left + up)%mod;
    
    return dp[x][y];
}


int main()
{
    
  
  cin>>m;
  cin>>n;
  
  for(int i=1;i<=m;i++)
  {
      for(int j=1;j<=n;j++)
      {
          cin>>arr[i][j];
      }
  }
  
 cout<<fn(1,1)%mod<<endl;
 

  
 
  
	return 0;
}