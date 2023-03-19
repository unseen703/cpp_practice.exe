#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
   //unordered_map<string,int> m;
    for (int i = 0; i < n; i++)
    {
       int x,y,a,b,c;
       cin>>x>>y>>a>>b>>c;
       if((x - y) >= (a + b + c)){
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       
    }
    return 0;
}