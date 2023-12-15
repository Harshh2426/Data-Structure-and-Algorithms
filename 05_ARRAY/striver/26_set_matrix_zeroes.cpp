/*

 * Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
 * Output: [[1,0,1],[0,0,0],[1,0,1]]

*/

#include <bits/stdc++.h>
using namespace std;

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int n = matrix.size(), m = matrix[0].size();
//     vector<int> row(n, 0);
//     vector<int> col(m, 0);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (row[i] == 1 or col[j] == 1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

/*

 * TC : O(n^2)
 * SC : O(n+m)

*/

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    int colTemp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }else{
                    colTemp=1;
                }
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>0;j--){
            if(matrix[i][0]==0 or matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(colTemp){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    
}


/*

 * TC : O(n*m)
 * SC : O(1)

*/

int main()
{
    vector<vector<int>> vect = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(vect);
    for (auto x : vect)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}