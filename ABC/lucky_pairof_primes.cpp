#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
// #define prt(x,y) cout << x<<" "<<y<<"\n"
#define prt(x) cout << x << "\n"

#define LL long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<LL>
#define vpi vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define mll map<LL, LL>
#define BSet_Cnt(x) __builtin_popcount(x)
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const int N = 1e7 + 3;
// vi primes;
// int seives[N + 1];

void sieve(int N)
{
    vi seives(N+1);
    for (LL i = 3; i < N; i += 2)
        seives[i] = i;

    for (LL i = 3; i * i < N; i++)
    {
        if (seives[i] == i)
        {
           
            for (LL j = 3 * i; j < N; j += 2 * i)
                seives[j] = i;
            //  for all divisible  odd number  j from 3 to 10^7  it will store smallest divisor of number in seive[j]
        }
    }


}
void solve()
{

    int x, y;

    cin >> x >> y;
    int d = abs(x - y);
    // cout<<d<<"\n";
    if (d == 1)
    {
        cout << -1 << "\n";
    }
    else if (__gcd(x, y) > 1)
    {
        cout << 0 << "\n";
    }
    else if(d%2 == 0){
        cout<<1<<"\n";
    }
    else
    {
        int ans = d;
        while (d > 1)
        {
            
            int factor = seives[d];
// cout<<factor<<"\n";
            ans = min(ans, factor - x % factor);
            while (d % factor == 0)
                d /= factor;

        }
        cout << ans << "\n";

    }
    return;
}

int main()
{
    fio;
    int t = 1;
    sieve();
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}