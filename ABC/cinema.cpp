#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2)
            y % 2 == 0 ? cout << (x / 2 + 1) * y / 2 << endl : cout << (x / 2 + 1) * (y / 2 + 1) << endl;
        else
            y % 2 == 0 ? cout << (x / 2) * y / 2 << endl : cout << (x / 2) * (y / 2 + 1) << endl;
    }
    return 0;
}