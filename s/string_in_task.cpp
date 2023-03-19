#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
cin >> s;
    int count = 0;
    vector <char> s1;
  //  cout << s;
  int n = s.size()   ;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ||
         s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            s.erase(s.begin() + i);
            i--;
        }
    }
//    cout << s;
   n = s.size();
    for (int i = 0; i < 2*n; i++)
    {
        if (i % 2 == 0)
           s1.push_back('.');

        else
        {
            s1.push_back(s[i - count - 1]);
            count++;
        }
    }
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
       for(char c: s1)
       cout << c;
         return 0;
    }