/*
 n=4

 1
 2 3
 4 5 6
 7 8 9 10

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    vector<vector<int>>vect(n,vector<int>(n));
    for(int i=0;i<n;i++){
        vect[i].resize(i+1);
        for(int j=0;j<=i;j++){
            if(j==0 or j==n-1){
                vect[i][j]=1;
            }
            else{
                vect[i][j]=vect[i-1][j]+vect[i-1][j-1];
            }
        }
    }
    for(auto x:vect){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n = 6;
    helper(n);
    return 0;
}