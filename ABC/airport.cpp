#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n, k, max_p = 0, min_p = 0;
  cin >> n >> k;

  long long int arr[k];
  long long int arr1[k];

  for (long long int i = 0; i < k; i++)
  {
    cin >> arr[i];
    arr1[i] = arr[i];
  }
  sort(arr, arr + k);
  sort(arr1, arr1 + k);
  long long int p = n, i = 0;
  while (p)
  {
    if (arr[i] == 0)
      i++;
    min_p += arr[i];
    arr[i]--;
    p--;
  } 
   
p= n;
  while (p)
  {
    max_p += arr1[k - 1];


    arr1[k-1]--;
    p--;
    sort(arr1, arr1 + k);
  // cout << max_p;
  }
  cout<< max_p <<" "<< min_p;
}