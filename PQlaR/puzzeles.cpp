#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, A = 0, B = 0, d = INT_MAX;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+m);
    int i = 0, pos = n + i - 1;
    while (pos != (m ))
    {
        B = arr[i];
        A = arr[pos];
        d = max((A - B), d);
        i++;
        pos = n + i - 1;
    }

    //
    cout << d;
}