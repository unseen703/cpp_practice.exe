#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = arr[0];

    for (int i = 1; i < n; i++)
    {
      

        if (arr[i] == arr[i-1])
        {
            count += 1;
        }
        else
        {   int h = abs(arr[i] - arr[i-1]);
      
            count = count +  h + 1;
        }
      
    }

    cout << count + n << endl;

    return 0;
}