#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    pair<int, int> p;
    
    p.first = 0;
    p.second = accumulate(h , h + k, 0);
  int cursum = accumulate(h , h + k, 0);

    for (int i = 1; i <= n - k; i++)
    {  
         cursum +=  -h[i-1]+h[i +k -1];
        
        if (p.second > cursum)
        {
            p.second = cursum;
            p.first = i;
        }
    }
    cout << (p.first + 1);
    return 0;
}