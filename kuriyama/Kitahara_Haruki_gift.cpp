// #include <iostream>
// #include <bits/stdc++.h>
// #include <stdio.h>
// using ll = long long;
// using namespace std;
// #define rep(i, st, e) for (ll i = st; i < e; i++)

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//   int n;
//   cin>>n;
//   int sum = 0,cnt = 0;
//   rep(i,0,n){
//       int t;
// cin>>t;
// t!=200 ? :cnt++;
// sum+=t;
//   }

//   if( (n== cnt && cnt%2) ||sum%200 != 0 )
//     cout<<"NO";
//   else cout<<"YES";
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;
#define rep(i, st, e) for (int i = st; i < e; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int l,r;
  cin>>l>>r;
  rep(i,l,r+1){
      if(i%2 != 0){
          (cout<<i<<" ") ;}
          else continue;
  }
    return 0;
}

