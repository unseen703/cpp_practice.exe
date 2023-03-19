#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 vector<int> snakePattern(vector<vector<int> > matrix){
    int k = 0;
    vector <int> v;
    for (int i = 0; i < matrix.size(); i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            for (int j = 0; j < matrix.size(); j++)
            {
              v.push_back(matrix[i][j]);
               // cout << matrix[i][j];
                k++;
            }
        }
        else
        {
            for (int j = matrix.size() - 1; j > 0; j--)
            {   v.push_back(matrix[i][j]);
                //cout << matrix[i][j];
                k++;
            }
        }
    }
//     for (auto value : v)
// {
//     cout << value<< " ";
// }
    return v;
}
int main()
{int N = 3 ;
vector <vector<int>> matrix= {{45, 48, 54},
                       {21, 89, 87},
                       {70, 78, 15}};
vector<int> result = snakePattern(matrix);
for (auto value : result)
{
    cout << value<< " ";
}


    
}
