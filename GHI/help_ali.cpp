#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int check = 0;
    if (s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U' || s[2] == 'Y')
    {
        check++;
    }

    for (int i = 0; i < 8; i++)
    {
        if (i != 1 && i != 2 && i != 5 && i != 6)
        {
            if ((s[i] + s[i + 1]) % 2 != 0)
            {
                check++;
                cout << check<<" "<<i<< endl;
            }
        }
    }
    if (check)
    {
        cout << "invalid";
    }
    else
        cout << "valid";
}