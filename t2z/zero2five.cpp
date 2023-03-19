#include <iostream>
using namespace std;

int ConvertFive(int n);
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        n = ConvertFive(n);
        cout << n<<endl;
    }
    return 0;
}
int ConvertFive(int n)
{
   
}
