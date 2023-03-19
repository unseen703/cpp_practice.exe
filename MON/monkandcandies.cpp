#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        /* code */
        long long n, k,c =0;
        cin >> n >> k;
        multiset<long long> s;
        while (n--)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }
     for(int j =0; j<k;j++)
        {
            auto it = --s.end();
          
           
            long long  b = *(it);
          
            c += b;
            s.erase(it);
            s.insert(b/2);
        }
        cout << c<<endl;
    }
}