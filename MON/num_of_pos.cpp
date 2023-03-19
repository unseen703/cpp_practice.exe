#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

int main()
{

    int n,a,b;
    cin >> n>>a>>b;
    // t = 1;
   cout<< min(b + 1, b - (a + b   -n)) ;

    return 0;
}