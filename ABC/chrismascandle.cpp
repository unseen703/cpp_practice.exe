#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,residue= 0,total =0,temp;

    cin >> a>>b;

 int curra = a;

 
    while(curra ){
        total += curra;
        residue += curra;
       
        curra = residue/b;
        residue = residue%b; 

    }
cout<< total;
    return 0;
}