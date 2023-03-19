#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define fio       ios_base::sync_with_stdio(false);     cin.tie(NULL);          cout.tie(NULL)
#define vi vector<int>
int a, b, c;
// bool agr(int x)
// {
//      if(a <= x && b <= x && c<= x) return true;
//     //  x can be a strngth of grp
//     int rem1 = x - a;
//     int rem2 = x - c; 
//     // if both a and c student are remaining then we can't club them into a same grp
//     // so x wont be the right choice
//     if(rem2 < 0 && rem1 <0) return false;

//     // we will make two grp of size x and
//     //  in this function we will check whether 
//     //  x is right choice or not 
//     // if we have less ppl in a then we will add some from 
//     // from b 
//     // and then we will do the same for grp c as well  as
//     // in other case we will add them to b 
//     if(rem1 > 0) {
//         // some extra pip in  a group can be from basic language only
//         int gr = max( (int)0 , b - rem1);
//         gr = gr - rem2;
//         // cout<<x<<' '<<rem1<<" "<<rem2<<1<<"\n";
//         if (gr <= x)
//             return true;
//         //    that means that c has lesser number of ppl and it will form smaller grp beacause smaller grp are always allowed
//         // even if(gr ==0 and rem2 > 0  that means we have grp whose size always be lesser than x and so we return true)
//     }
//    else if (rem2 > 0)
//     {
//        int gr = max( (int)0, b - rem2);
//         gr = gr - rem1;
//         // cout<<x<<' '<<rem1<<" "<<rem2<<2<<"\n";

//         if (gr <= x)
//         return true;
//     }
    
//     else {
//     // rem1 <= 0 || rem2 <= 0
//       int  gr = max(b-rem1-rem2, 0);
//         if(gr <=x) return true;
//         // case when any one of a or be is in excess so that it will be added into the b
//         // cout<<x<<' '<<rem1<<" "<<rem2<<3<<'\n';

//     }
//     return false;
// }

// int main()
// {  fio;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//     //  int c, a, b;
//         cin >> a >> b >> c;
//     // int mid = (a + b + c) / 3;
//         int lo = 0 ;
//         int hi = max(a , max(b,c));
//         while (hi - lo >= 1)
//         {
//             int mid = (hi + lo) / 2;

//             if ( agr( mid ) )
//             {
//                 hi = mid ;
//             }
//             else
//             {
//                 lo = mid  +1;
//             }
//         }
//        agr( lo ) ? cout <<lo :cout<<hi; 
//         cout << "\n";
        
//     }
// }



int main()
{  fio;
    int t;
    cin >> t;
    while (t--)
    {
    //  int c, a, b;
        cin >> a >> b >> c;
        int ans[3];
        ans[0] = a;
        ans[1] = c/2;
        ans[2] = c/2 +c%2;
        // we divided c into two equal half then we added b into three grps as we needed
        // like we always can add b into smaaler grp 
        while(b--){
            sort(ans, ans+3);
            ans[0]++;

        }
        sort(ans, ans+3);
        cout<<ans[2]<<"\n";
    }
}
