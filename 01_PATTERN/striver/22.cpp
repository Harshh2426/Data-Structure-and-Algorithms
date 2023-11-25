/*
 n=4

 4 4 4 4 4 4 4
 4 3 3 3 3 3 4
 4 3 2 2 2 3 4
 4 3 2 1 2 3 4
 4 3 2 2 2 3 4
 4 3 3 3 3 3 4
 4 4 4 4 4 4 4 

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            if(i==0 or i)
            cout<<n-i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n = 4;
    helper(n);
    return 0;
}