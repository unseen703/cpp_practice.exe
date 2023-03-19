#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v, b;

    // unordered_map<string,int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            b.push_back((v[i] & v[j]));
        }
    }
    sort(b.begin(), b.end());
    int mx = *(--b.end());
    int mn = *(b.begin());
    while (b.size() != 1)
    {
        int in = mx | mn;
        b.erase();
        b.erase(mn);
        if (*(--b.end()) < in)
        {
            mn = *(b.begin());
            mx = in;
        }
        else if (b[0] > in)
        {
            mx = *(--b.end());
            mn = in;
        }
        else
        {
            mx = *(--b.end());
            mn = *(b.begin());
        }

        b.push_back(in);
    }
    cout << b[0];

    return 0;
}/*#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int t;cin>>t;
     while (t--){
          int n,a[n],y;cin>>n;
          for (int i=0;i<n;i++){
               cin>>a[i];
          }
          vector<int> b;
          for (int i=0;i<n;i++){
               for (int j=i+1;j<n;j++){
                    b.push_back(a[i]&a[j]);
               }
          }
          sort(b.begin(),b.end());
          while (b.size()>1){
               y=(b[0]|b[b.size()-1]);
               b.erase(b.end()-1);
               b.erase(b.begin());
               b.push_back(y);
               sort(b.begin(),b.end());
          }
          cout<<b[0];
          cout<<endl;
     }     
}*/