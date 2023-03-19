#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    //cout << s;
    int CountUp = 0, CountDown = 0;
    for (int i = 0; i < s.size(); i++)
    {
       if (s[i] >= 'a' && s[i] <= 'z')
       CountDown++;
       else if (s[i] >= 'A' && s[i] <= 'Z')
       CountUp++;
    }

    if(CountUp > CountDown)
    transform(s.begin(), s.end(),s.begin(), ::toupper);
    else if(CountUp <= CountDown)
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    cout << s;
    return 0;
}