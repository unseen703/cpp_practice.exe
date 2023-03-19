#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;
int j= 0,i=0;

while(j <s2.size() && i<s1.size() ){
    if(s1[i] == s2[j]){
        i++;
        j++;
    }
    else j++;
}
cout<<i+1;
     return 0;
}