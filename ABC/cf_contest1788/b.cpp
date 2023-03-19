#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;
void solve(int n){
    if(n%2==0){
        cout<<n/2<<" "<<n/2;
    }
    else{
        int a=n;
        int cnt = 0;
        while(a%10 == 9){
            a = a/10;
            cnt++;
            
            int sum=0,k=n;
            while(k!=0){
                sum+=(k%10);
                k=k/10;
            }
            cout<<sum/2<<" "<<n-(sum/2);
        }
        else{
            cout<<n/2<<" "<<n/2+1;
        }
    }
}
int main(){
   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
        solve(n);
        cout<<endl;
   }
}