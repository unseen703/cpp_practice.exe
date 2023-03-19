#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> generate(int N)
{
    vector<string> v;
    // vector<string> v;
    queue<string> q;
    q.push("1");
    for (int i = 0; i < N; i++)
    {
        v.push_back(q.front()); // because next 2 string will be sum of previous element either  + 0 or + 1
        q.push(v.back() + "0");
        q.push(v.back() + "1");
        q.pop();
    }
    return v;
}
int main()
{
    int k;
    cin >> k;
    // cout << binary(k);
    //    std::stoi (k,nullptr,2);
    // vector<string> v;
    // queue<string> q;
    // q.push("1");
    // for (int i = 0; i < k; i++)
    // {
    //     v.push_back(q.front());// because next 2 string will be sum of previous element either  + 0 or + 1
    //     q.push(v.back() + "0");
    //     q.push(v.back() + "1");
    //     q.pop();
    // }
    vector<string> v = generate(k);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << i + 1<<"\n";
    }
}
