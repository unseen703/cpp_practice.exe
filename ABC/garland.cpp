#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization ("unroll-loops")
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

#define prtNO cout << "NO\n"
#define prtYES cout << "YES\n"
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define BSet_Cnt(x) __builtin_popcount(x)

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                    \
    cout.tie(0)

typedef  long long   ll; typedef  pair<int, int>  pii;  typedef  vector<int>  vi;  typedef  vector<pii>  vpi; typedef map<int, int> mii;


//  it's gonna be alright so just don't give up yet. just one more question 
void DKK()
 { 
  string s;
  cin>>s;
  
  
    map<int, int> m;
   
     for( auto c: s){
    m[c - '0']++;
   
     }
   


    if( m.size() == 4 || m.size() == 3){
        cout<<4<<"\n";
        return;
    }
    if( m.size() == 2){
        int flg =0;
        for(auto i : m){
            if( i.ss == 3){
                flg = 1;
                break;
                
            }
        }
        
        if( flg){
            cout<<6<<"\n";
        }
        else{
            cout<<"4\n";
        }
    }
    if(m.size() == 1){
        cout<<"-1\n";
    }
 }

int main()
{
 fio;
    int t = 1;
    cin>>t;
    while (t--)
    {
       DKK ();
    }

    return 0;
}
