#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {3, 12, 30, 79, 2};

    int  k = 2;
  
    int element = arr[k - 1];
    arr[k - 1] = INT_MAX;
    sort(arr, arr + n);
    for (int i = n - 1; i > k - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k - 1] = element;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// void strangeSort (int arr[], int n, int k)
//             {
//             	//code here.
//             	int element=arr[k-1];
//             	arr[k-1]=INT_MAX;
//             	sort(arr,arr+n);
//             	for(int i=n-1;i>k-1;i--){
//             	    arr[i]=arr[i-1];
//             	}
//             	arr[k-1]=element;
//             }