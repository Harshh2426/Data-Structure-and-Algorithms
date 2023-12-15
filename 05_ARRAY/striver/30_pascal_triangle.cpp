/*

 * Input: n=5
 * Output: 
 * 1 
 * 1 1
 * 1 2 1
 * 1 3 3 1
 * 1 4 6 4 1

*/

#include <bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    int num=1,d=1;
    for(int i=r+1;i<=n;i++){
        num=num*i;
        num=num/d;
        d++;
    }
    return num;
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>>vect(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        vect[i].resize(i+1);
        vect[i][0]=1;
        vect[i][i]=1;
        for(int j=1;j<=i;j++){
            vect[i][j]=nCr(i,j);
        }
    }
    return vect;
}


/*

 * TC : O(n^n^n)
 * SC : O(1)

*/


// vector<vector<int>> pascalTriangle(int n)
// {
//     vector<vector<int>>vect(n,vector<int>(n,0));
//     for(int i=0;i<n;i++){
//         vect[i].resize(i+1);
//         vect[i][0]=1;
//         vect[i][i]=1;
//         for(int j=1;j<=i;j++){
//             vect[i][j]=vect[i-1][j]+vect[i-1][j-1];
//         }
//     }
//     return vect;
// }
/*

 * TC : O(n*n)
 * SC : O(1)

*/

int main()
{
    int n = 5;
    vector<vector<int>>ans = pascalTriangle(n);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}