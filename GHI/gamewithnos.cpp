#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int *game_with_number(int *, int);

int main()
{
    int n;
    cin>>n;
    int a1[n];

    for (int j = 0; j < n; j++)
    {
        cin >> a1[j];
    }
    int *ptr = game_with_number(a1,n);
//      for (int j = 0; j < n; j++)
//     {
//         cout << (*ptr)<<" ";
//         ptr++;
//    }
}
int *game_with_number(int arr[], int n)
{
    // int* result;
    // result[n - 1] = arr[n - 1];
    // Complete the function
    for (int i = 0; i < n-1 ; i++)
    {

        arr[i] = arr[i] ^ arr[i + 1];
        // cout<< arr[i]<< " ";
        cout << ;
    }
    
    return arr;
}
