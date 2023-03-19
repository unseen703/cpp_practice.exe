// n=int(input())
// arr = [int(i) for i in input().split()] 
// print(arr)






#include<bits/stdc++.h>
using namespace std;
 
 typedef long long ll;
typedef unsigned long long ull;

int main(){
    ll t;
    cin>>t;
    

     
    while(t--){
int m,s;
cin>>m>>s;

for(int i=0;i<m;i++)
{
     int  x;
      cin>>x;
      s+=x;
}
cout<<s<<"\n";
int cnt=1;
int tmp=0;
int flg =0;
while(true)
{
    tmp+=cnt;
    cnt++;
    cout<<tmp<<"\n";
    if( tmp==s )
{
      cout<<"YES\n";

flg =true;
break;
}
else if(tmp > s) break;
}

if(flg) continue;

else
{
      cout<<"NO\n";
}

    }
   
  
    
    return 0;
}