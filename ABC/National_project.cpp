#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define ull unsigned long long

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,g,b;
        cin>>n>>g>>b;
        ll bad = n/2;
        ll good = n-bad;
        
        ull ans = 0;
        ll ct = good/g;
        n -= ct*g;
        // good = good-(ct*g);
        good = good%g;
        if (good>0)
        {
            ans += ct*(g+b) + good;
            n -= good;
            n -= min(n,b*ct);
            cout<<n<<"\n";
            ans += n;
        }
        else
        {
            ans += ct*g + (ct-1)*b;
            n -= min(n,(ct-1)*b);
            cout<<n<<"\n";
            ans += n;
        }
        cout<<ans<<endl;
        cout<<"\n";
    }
    return 0;
}
