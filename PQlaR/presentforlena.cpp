#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 2*n-2*i -1 ; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {if (i == n && j == 0)
        {
           cout << j;
        }
        else
            cout <<" "<< j;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << " "<<j;
        }

        cout << endl;
    }
    for (int i = n-1; i >=0; i--)
    {
        for (int a =  2*n - 2*i -1; a >0; a--)
            cout << " ";
        for (int j = 0; j <= i; j++)
        { 
            cout <<" "<< j;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout <<" "<< j;
        //    // if (i == 1 && j== 0)
        //     {
        //    //    cout<<"0";
        //     }
            
        }

        cout << endl;
    }
}
