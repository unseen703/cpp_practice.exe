#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio    ios_base::sync_with_stdio(false);     cin.tie(NULL);    cout.tie(NULL)
#define vi vector<int>
ll M = 1e9 +10;
ll BinExpn(int a, int b)
{
  ll ans = 1;
  while (b)
  {
    if (b & 1)
      ans = (ans * a) % M;
    a = (a * 1LL * a) % M;
    b = b >> 1;
  }
  return ans; 
}

int main()
{ fio;
    int t;
    cin >> t;
    while (t--)
    {

        int n,k,r,l;
        cin >> n>>l>>r>>k;
        vi v(n);
        rep(i, 0, n) cin >> v[i];
       sort(v.begin(),v.end());
       int cnt = 0;
       int i = 0;
        for(i;i<n;i++) if(v[i]>= l) break;
     while ( k>= v[i] && v[i]<= r  && v[i] >=l   && i<n)
        {  
           
            k-=v[i];
            i++;
             cnt++;
        }
         cout<<cnt<<endl;
    }
    return 0;
}