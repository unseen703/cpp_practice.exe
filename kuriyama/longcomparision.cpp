
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int n;
   cin >> n;

   for (int i = 0; i < n; i++){
      long long int x1, x2;
      int y1, y2;
      cin >> x1 >> y1;
      cin >> x2 >> y2;
      int mn = min(y1, y2);
      y1 -= mn;
      y2 -= mn;
      if (y1 >= 7)
      cout << ">"<< "\n";
      
      if (y2 >= 7)
       cout << "<" << "\n";
      else
      {  for (int i = 0; i < y1; ++i)
            x1 *= 10;
         for (int i = 0; i < y2; ++i)
            x2 *= 10;
         if (x1 > x2)
            cout << ">\n";
         else if (x1 < x2)
            cout << "<\n";
         else
            cout << "=\n";
      }
   }
}