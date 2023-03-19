// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define rrep(i, a, b) for (int i = a; i >= b; i--)
// #define input(a, n)             \
//     for (int i = 0; i < n; i++) \
//         cin >> a[i];
// #define prtNO cout << "NO\n"
// #define prtYES cout << "YES\n"
// // #define prt(x,y) cout << x<<" "<<y<<"\n";
// #define prt(x) cout << x << "\n"

// #define LL long long
// #define mp(x, y) make_pair(x, y)
// #define pb(x) push_back(x)
// #define se second
// #define fi first
// #define all(v) v.begin(), v.end()
// #define pii pair<int, int>
// #define vi vector<int>
// #define vll vector<LL>
// #define vpi vector<pii>
// #define vs vector<string>

// #define mii map<int, int>

// #define BSet_Cnt(x) __builtin_popcount(x)

// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)

// // cout << "Case #" << i << ": " <<  << "\n";
// // never ever use endl until asked
// // In C++, comparator should return false if its arguments are equal. ref:-cf blog entry 70237
// // lambda function  [](parameters) ->(return type) { return (condition / operation); }
// //  resource --> generalized lambda expre. --> geeksforgeek
// // a &(~(1<<i)) unsets  ith bit
// //  a|(1<<i) sets ith bit
// //  a&(1<<i)!= 0  bit is set or not

// // unique function removes duplicates and returns value of an iterator to the element that follows the last element not removed
// // more-importantly it doesnt resizes your vector/container so do resize it before further uses
// // following are some ways to do so

// // #define remove_duplicates(v) sort(all(v));  nums.erase(unique(all(v)), v.end()); // vector will be sorted in this case;
// // #define unique(v) v.resize(distance(v.begin(),unique( v.begin(),all(v) ) ) );
// // sort(A.begin(),A.end());   set<int> s(A.begin(),A.end());  A.assign(s.begin(),s.end()); //needs extra space
// bool is_valid(int val, int k, vi &v)
// {
//     int cnt = 0;
//     int sum = 0;
//     rep(i, 0, (int)v.size())
//     {
//         sum += v[i];
//         if (sum == val)
//         {
//             cnt++;
//             sum = 0;
//         }

//         else if (sum > val)
//         {
//             return false;
//         }
//     }
//     if (cnt == v.size() - k)
//     {
//         return true;
//     }
//     return false;
// }
// bool isPrime(int n)
// {
//     if (n < 2)
//         return 0;
//     if (n < 4)
//         return 1;
//     if (!(n % 2) || !(n % 3))
//         return 0;
//     for (int i = 5; i * i <= n; i += 6)
//         if (!(n % i) || !(n % (i + 2)))
//             return 0;
//     return 1;
// }
// vi divisor(int n, int x)
// {
//     // set<int,greater<int>> div;/
//     vector<int> div;
//     // div.insert(n);
//     //    if( x<)
//     //    int ans = INT_MIN;
//     rep(i, 2, sqrt(n) + 1)
//     {
//         if (i * i <= n)
//         {
//             if (n % i == 0)
//             {
//                 if (i != n / i)
//                 {
//                     if (isPrime(i))
//                         div.pb(i);
//                     if (isPrime(n / i))
//                         div.pb(n / i);
//                 }
//                 else
//                 {
//                     if (isPrime(i))
//                         div.push_back(i);
//                 }
//             }
//         }
//     }
//     return div;
// }
// void primeFactorization(int n, int x)
// {
//     // here n%x == 0
//     while (x < n)
//     {
//         for (int i = x * 2; i <= n; i += x)
//         {
//             // multiples of x  that divides n ;
//             // but first one only
//             // that wil give prime factorization from x to n
//             if (n % i == 0)
//             {
//                 cout << x << " " << i << "\n";

//                 x = i;
//                 break;
//             }
//         }
//     }
// }

// void solve()
// {
//     int n, x;
//     cin >> n >> x;

//     if (n % x)
//     {
//         cout << "-1\n";
//     }
//     else
//     {
//         vi ans(n + 1, -1);
//         // vi temp;
//         while (x < n)
//         {

//             for (int i = x * 2; i <= n; i += x)
//             {
//                 // multiples of x  that divides n ;
//                 // but first one only
//                 // that wil give prime factorization from x to n
//                 if (n % i == 0)
//                 {
//                     cout << x << " " << i << "\n";

//                     x = i;
//                     break;
//                 }
//             }
//         }
//         rep(i, x + 1, n)
//         {
//         }
//     }
// }

// int main()
// {
//     fio;
//     int t = 1;
//     cin >> t;
//     // t = 1;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
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
// #define prt(x,y) cout << x<<" "<<y<<"\n";
#define prt(x) cout << x << "\n"

#define LL long long
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define se second
#define fi first
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<LL>
#define vpi vector<pii>
#define vs vector<string>

#define mii map<int, int>

#define BSet_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// cout << "Case #" << i << ": " <<  << "\n";
// never ever use endl until asked
// In C++, comparator should return false if its arguments are equal. ref:-cf blog entry 70237
// lambda function  [](parameters) ->(return type) { return (condition / operation); }
//  resource --> generalized lambda expre. --> geeksforgeek
// a &(~(1<<i)) unsets  ith bit
//  a|(1<<i) sets ith bit
//  a&(1<<i)!= 0  bit is set or not

// unique function removes duplicates and returns value of an iterator to the element that follows the last element not removed
// more-importantly it doesnt resizes your vector/container so do resize it before further uses
// following are some ways to do so

// #define remove_duplicates(v) sort(all(v));  nums.erase(unique(all(v)), v.end()); // vector will be sorted in this case;
// #define unique(v) v.resize(distance(v.begin(),unique( v.begin(),all(v) ) ) );
// sort(A.begin(),A.end());   set<int> s(A.begin(),A.end());  A.assign(s.begin(),s.end()); //needs extra space
bool is_valid(int val, int k, vi &v)
{
    int cnt = 0;
    int sum = 0;
    rep(i, 0, (int)v.size())
    {
        sum += v[i];
        if (sum == val)
        {
            cnt++;
            sum = 0;
        }

        else if (sum > val)
        {
            return false;
        }
    }
    if (cnt == v.size() - k)
    {
        return true;
    }
    return false;
}


void solve()
{
    int n, x;
    cin >> n >> x;

    if (n % x)
    {
        cout << "-1\n";
    }
    else
    {

        int cur = n;
        int temp = x;
        vi ans(n + 1, -1);
        while ( x<n)
        {
           for( int i = x*2; i<= n ; i+=x)
            {
                if (cur % i == 0  )
                {
                    ans[x] = i;
                    x = i;
                    break;
                }
            }
        }
        cout<<temp<<" ";
        rep(i, 2, n)
        {
            if (ans[i] == -1)
            {
                cout<<i<<" ";
            }
            else cout<<ans[i]<<" ";
        }
        cout<<"1\n";

    }
}

int main()
{
    fio;
    int t = 1;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}