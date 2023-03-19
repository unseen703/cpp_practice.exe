#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n; // number of forces
    cin >> n;
    int fx = 0, fy = 0, fz = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int arr[3];
        for (int j = 0; j < 3; j++)
        
            cin >> arr[j];
        
        fx += arr[0];
        fy += arr[1];
        fz += arr[2];
    }
    if (fx != 0 || fy != 0 || fz != 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}