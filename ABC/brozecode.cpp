#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    //cout << s;
    int count = 0;
    vector<int> v;
    for (int j = 0; j < s.size() ; j++)
    {
        if (s[j] == '-' && s[j + 1] == '.')
        {
            v.push_back(1);
            j++;
            count++;
        }
        else if (s[j] == '-' && s[j + 1] == '-')
        {
            v.push_back(2);
            j++;
            count++;
        }
        else
        {
            v.push_back(0);
            count++;
        }
    }

   for(auto v1 : v){
       cout<< v1;
   }
    return 0;
}
