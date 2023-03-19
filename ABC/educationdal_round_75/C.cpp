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

// cout << "Case #" << i << ": " <<  << "\n";
// never ever use endl until asked
// In C++, comparator should return false if its arguments are equal. ref:- cf blog entry 70237
// lambda function  [](parameters) ->(return type) { return (condition / operation); }
//  resource --> generalized lambda expre. --> geeksforgeek
// a &(~(1<<i)) unsets  ith bit
//  a|(1<<i) sets ith bit
//  a&(1<<i) != 0  bit is set or not

// unique function removes duplicates and returns value of an iterator to the element that follows the last element not removed
// more-importantly it doesnt resizes your vector/container so do resize it before further uses

// following are two ways to do so
// #define remove_duplicates(v) sort(all(v));  nums.erase(unique(all(v)), v.end()); // vector will be sorted in this case;
// #define unique(v) v.resize(distance(v.begin(),unique( v.begin(),all(v) ) ) );
// or use set and store elemnent in it and assign it to a vector ( will use o(n ) extra space)

// priority_queue<long long, vector<long long>, greater<long long> > pq;
// pop_back() function works faster than the erase
//                                          union - find approach...........................................................................

int main()
{
    fio;
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string ev;
        string odd;

        for (int i = 0; i < n; i++)
        {
            if ((s[i] - '0') % 2)                odd += s[i];
            else                ev += s[i];
        }
reverse(ev.begin(), ev.end());
reverse(odd.begin(), odd.end());


        while (odd.size() && ev.size())
        {
            if (odd.back()< ev.back())
            {
                cout << odd.back();
                odd.pop_back();
            }
            else
            {
                cout <<ev.back();
                ev.pop_back();
                
            }
        }
        while(ev.size()){
             cout <<ev.back();
                ev.pop_back();
        }
        while(odd.size()){
             cout <<odd.back();
                odd.pop_back();
        }
        cout << "\n";
    }

    return 0;
}