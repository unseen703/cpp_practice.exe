//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
// vector<int> target ;
// int cnt = 0;
 bool subsetgen(vector<int> &arr,  int i ,    int tar, vector<vector<int>> &dp){
     int N = arr.size();
      if( i >= N) return false;
    if(tar < 0) return false ;
  
     if(tar == 0) {
        
            return true;
        }
    if( i == N -1){
        return(tar == 0);
        }

      if(dp[i][tar] != -1) return dp[i][tar];
         return dp[i][tar] =  (subsetgen(arr, i+1,tar  - arr[i], dp) |    subsetgen(arr, i+1,tar, dp));
 }
       
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
      
        vector<vector<int>> dp(n, vector<int>(1e5 +2, -1) );
         return subsetgen(arr, 0,sum , dp);

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t = 1;
    // cin>>t ;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends