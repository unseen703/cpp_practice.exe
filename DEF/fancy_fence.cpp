#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x;
        cin>>x;
        float n = round(360 / (180 - x));
         float s = (float)((n - 2) * 180 / n);
         cout<<n<<" "<<s<<" ";
         cout<<x<<endl;
        if (s == x  )
            cout << "YES" << endl;

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}