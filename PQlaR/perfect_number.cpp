#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define vi vector<int>

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
    int check(int n)
{
    int add = 0;
    while (n)
    {
        add += n % 10;
        n /= 10;
    }
    return add  ;
}
int main()
{
    int n;
    cin >> n;
    // int ans = 0;
    ll x = 19;
    for (int i = 0; i < n-1; i++)
    {  x+=9;
     while(check(x) != 10 ) x+=9;
    }
   
//    for(x; x<(int)1e8; x+=9){
//        if(ans == n) break;
//  if(check(x)) ans++;
//    } x-=9;
    cout<<x;
}