#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
int n;
cin>>n;
 queue<int> q;
 for (int i = 0; i < n; i++)
 { int x;
    cin>>x;
    q.push(x);

 }
 while (q.size() != 1)
 { while (5){
    
 }
 {
     
 }

    int x = q.front();
    q.pop();
    q.push(x);
    if (q.size() == 1){
 cout<<q.front();
    return 0;
    }
    
    q.pop();
    
 }

    if (q.size() == 1)
{
    cout<<q.front();
}
 
 return 0;
   
}
