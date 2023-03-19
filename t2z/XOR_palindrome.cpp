// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define ll long long
// #define fio                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// #define vi vector<int>
// #define all(v) v.begin(), v.end()

// int main()
// {
//     fio;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int ct1 = count(all(s), '1');
//         int ct0 = n - ct1;
//         if ((ct1 %2 == 0 && ct0 %2 == 0) || ct1 %2  != ct0 % 2)
//             cout << "YES\n";
//         else
//         {
//             if (ct1 == ct0)
//                 cout << "YES\n";
//             else
//                 cout << "NO\n";
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
	
void func1();
void func2();

#pragma startup func1
#pragma exit func2

void func1()
{
	cout << "Inside func1()\n";
}

void func2()
{
	cout << "Inside func2()\n";
}

int main()
{
	void func1();
	void func2();
	cout << "Inside main()\n";

	return 0;
}

// This code is contributed by shivanisinghss2110
