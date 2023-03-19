// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n ;
//     cin>>n;
//  int v[n];
// int sum = 0;

//   for(int i=0;i<n;i++){ int x; cin>>x;
//   v[i] = x;
//     sum += v[i]; }

//   for (int i = 0; i < n; i++)
//   {  
//     --v[i];
//     v[v[i]%n] +=n; 
 
//   }
//   int rep =0, mis =0;
//   for(int i =0 ; i<n;i++){
//       if (v[i] >= 2*n)
//       {
//          rep = i+1;
//          cout<<rep<<" ";
//          break;
//       }
//   }
//    int sum1 = (n*(n+1))/2;
   
//  mis = sum1 -(sum - rep);
//    cout<<rep<<' '<<mis;
//     return 0;
// }
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
   long long sum = 0;
  for(int i=0;i<n;i++){ sum += arr[i]; }

  for (int i = 0; i < n; i++){  
    --arr[i];
    arr[arr[i]%n] +=n;   }
  long long rep =0, mis =0;
  for(int i =0 ; i<n;i++){
      if (arr[i] >= 2*n)
      {
         rep = i+1;
         break;
      }
  } 

   long long sum1 = ((long long)n*(n+1))/2;
 mis = sum1 -(sum - rep);
  //  cout<<sum1<<" " <<sum;
  
   arr[0] = rep;
  
   arr[1] = mis;
   return arr;
    }
};

// { Driver Code Starts.

int main() {
  //   int t;
  //  // cin >> t;
  //   t =1;
  //   while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    // }
    return 0;
}  // } Driver Code Ends