#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define ll long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define Set_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<string> Gen_Binary(int N)
{
    vector<string> v;
    queue<string> q;
    q.push("1");
    for (int i = 0; i < N; i++)
    {
        v.push_back(q.front()); // because next 2 string will be sum of previous element either  + 0 or + 1
        q.push(v.back() + "0");
        q.push(v.back() + "1");
        q.pop();
    }
    return v;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
// sort(all(s));
bool flg = false;
char e = s[n-1];
char st = s[0];
rep(i,0,n ){
if( s[i] > e && st < s[i]    || s[i] < e && st > s[i] )
flg = true;
}
!flg ? cout<<"YES"<<endl :cout<<"NO"<<endl;
}


int main()
{

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
solve();
       
    }

    return 0;
}