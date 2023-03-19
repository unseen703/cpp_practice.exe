// // hey there you yes, you who is doubting himself again and again
// // let me tell you it's gonna be alright so just don't give up yet. just one more question
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
// // #define prt(x,y) cout << x<<" "<<y<<"\n"
// #define prt(x) cout << x << "\n"

// #define ll long long
// #define mp(x, y) make_pair(x, y)
// #define pb(x) push_back(x)
// #define ff first
// #define ss second
// #define all(v) v.begin(), v.end()
// #define pii pair<int, int>
// #define vi vector<int>
// #define vll vector<ll>
// #define vpi vector<pii>
// #define vs vector<string>
// #define mii map<int, int>
// #define mll map<ll, ll>
// #define BSet_Cnt(x) __builtin_popcount(x)

// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NUll);                    \
//     cout.tie(NUll)
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

// void fillsieve(int N)
// {
// vi primes;
//     vi seive(N+1);
//     for (ll i = 3; i < N; i += 2)
//         seive[i] = i;
//     for (ll i = 3; i * i < N; i++)
//         if (seive[i] == i)
//             for (ll j = 3 * i; j < N; j += 2 * i)
//                 seive[j] = i;
// }

// void solve()
// {

//     int n;
//     cin >> n;

//     vi v(n);

//     int mx = INT_MIN;
//     map<int, int> rp;
//     int flg = 0;

//     rep(i, 0, n)
//     {
//         cin >> v[i];
//         // rp[v[i]]++;
//         // if (rp[v[i]] > 1 && v[i] > 1)
//         //     flg = true;
//         // mx = max(mx, v[i]);
//     }
//     rep(i , 0 ,n){
// for(auto &j : primes){
//     if(v[i] == 1  || v[i] < j*j ) break;
//         cout<<v[i]<<"\n";
//     while( v[i] % j == 0 ){
//         // cout<<j<<" "<<v[i]<<"\n";
//         v[i]/=j;
//         cout<<j<<" "<<v[i]<<"\n";
//     }
// }
//     cout<<"\n";
//     }
//     // if (flg == 1)
//     // {
//     //     prtYES;
//     //     return;
//     // }

//     // unordered_map<int, int> vis;
//     // // // sort(all(v));
//     // // for (auto &p : primes)
//     // // {
//     // //     int cnt = 0;
//     // //     auto it = lower_bound(all(v), p);
//     // //     while (it != v.end())
//     // //     {
//     // //         int &x = *it;
//     // //         int k = 0;
//     // //         if (x % p == 0)
//     // //           {  vis[p]++; cnt++;}

//     // //             if(vis[p] >=2){
//     // //                 prtYES;
//     // //                 return;
//     // //             }
//     // //         while (x % p == 0)
//     // //         {
//     // //             x /= p;
//     // //             k++;
//     // //         }
//     // //         it++;
//     // //     }
//     // //     if(cnt >=2){
//     // //         prtYES;
//     // //         return ;
//     // //     }
//     // // }
//     // rep(i, 0, n)
//     // {
//     //     for (auto p : primes)
//     //     {
//     //         if (p * p > v[i] || v[i] == 1)
//     //             break;
//     //         if (v[i] % p == 0)
//     //         {
//     //             if (vis[p] != 0)
//     //             {
//     //                 prtYES;
//     //                 return;
//     //             }
//     //             vis[p] = 1;
//     //             while (v[i] % p == 0)
//     //                 v[i] /= p;
//     //         }
//     //     }
//     //     if (v[i] > 1)
//     //     {
//     //         if (vis[v[i]] != 0)
//     //         {
//     //             prtYES;
//     //             return;
//     //         }
//     //         vis[v[i]] = 1;
//     //     }
//     // }
//     // prtNO;
// }

// int main()
// {
//     fio;
//     int t = 1;
//     sieve(1e7);
//     // for(ll i = sqrt(1e7); i< 1e)
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
// hey there you yes, you who is doubting himself again and again  
// let me tell you it's gonna be alright so just don't give up yet. just one more question 
