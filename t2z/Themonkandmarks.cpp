#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map <int, set<string>> m;
    for (int i = 0; i < t; i++)
    {string s;
    int x;
    cin >> s>> x ;
    m[x].insert(s);

    }
    auto it = --m.end();

  while(it != m.begin()){
auto &str = (it -> second);
int marks = (it -> first) ;
for(auto value : str)
cout << value << " " << marks << endl;

it --;
  }


    
}