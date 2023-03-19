#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
   int Cnt_e=0,Cnt_o=0;
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        if(x&1) Cnt_o++;
        else Cnt_e++;
    }

   if(Cnt_o&1) cout<<Cnt_o<<"\n";
   else cout<<Cnt_e<<"\n";
}