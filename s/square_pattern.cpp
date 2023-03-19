#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int j = 1;
    for (int i = 0; i <n; i++)
{        if (i % 2 == 0)
        {  int k = j;
            for ( j = k ; j < k+5 ; j++)
            {
             
                cout <<j <<" ";

            }
            j--;
            cout<<endl;
        }
        else
        {  int k = j;
            for ( j = k+5; j > k; j--)
            {  
                cout << j <<" ";
            }
            cout<<endl;
            j = j+6;
        }
    }
    return 0;
}