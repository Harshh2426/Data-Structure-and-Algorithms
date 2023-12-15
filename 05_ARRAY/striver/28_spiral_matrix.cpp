/*

 * Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
 * Output: [1,2,3,6,9,8,7,4,5]

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &matrix)
{

    int rs = 0, cs = 0;
    int re = matrix.size() - 1, ce = matrix[0].size() - 1;
    int count = 0, total = (re + 1) * (ce + 1);
    vector<int> vect;
    while (count < total)
    {
        for (int i = cs; count < total and i <= ce; i++)
        {
            vect.push_back(matrix[rs][i]);
            count++;
        }
        rs++;
        for (int i = rs; count < total and i <= re; i++)
        {
            vect.push_back(matrix[i][ce]);
            count++;
        }
        ce--;
        for (int i = ce; count < total and i >= cs; i--)
        {
            vect.push_back(matrix[re][i]);
            count++;
        }
        re--;
        for (int i = re; count < total and i >= rs; i--)
        {
            vect.push_back(matrix[i][cs]);
            count++;
        }
        cs++;
    }
    return vect;
}

/*

 * TC : O(n*m)
 * SC : O(1)

*/

int main()
{
    vector<vector<int>> vect = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiralMatrix(vect);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}