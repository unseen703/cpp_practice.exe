#include <bits/stdc++.h>
using ll = long long;
using namespace std;
set<ll> v;
const int N = 1e9;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void generate(ll b, ll n)
{
    if (b)
    {
        v.insert(b);
    }
    if (b <= n)
    {
        generate(b * 10 + 4, n);
        generate(b * 10 + 7, n);
    }
    return;
}
int main()
{
    fio
            ll l,r;
    ll sum = 0;
    cin >> l >> r;
    // cout<<l<<" "<<r<<" ";
    generate(0, r*1LL);
    //   long nxt = *v.lower_bound(l*1LL);
    //  cout<<nxt;
    while ((l) <= (r) )
    {
//  cout<<l<<""
         ll nxt = *v.lower_bound(l*1LL);
        sum += nxt * (min(r , nxt) - (l) + 1);
        l = nxt + 1;
    }
    cout << sum;
    return 0;
}
