#include <iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{ int t;
cin>>t;
whil
    string s;
    cin >> s;
    int n,count;
    count =0;
    n= s.size();
  
    string s1;
  for (int i = 0; i < n; i++)
  {
     if(s[i]== 'h'&& s1.size() == 0){
       s1.append(1,s[i]);
         count++;
     }
     else if(s[i] == 'e' && count == 1)
     {s1.append(1,s[i]);
         count++;
     }
       else if(s[i] == 'l' && count == 2)
     {   s1.append(1,s[i]);
         count++;
     }
       else if(s[i] == 'l' && count == 3)
     {  s1.append(1,s[i]);
         count++;
     }
       else if(s[i] == 'o' && count == 4)
     {s1.append(1,s[i]);
         count++;
     }
     
  }
  
 if(count == 5)
 cout<<"YES";
 else
 {
     cout<<"NO";
 }
 
    return 0;
}