/*
 n=6

 ******
 *   *
 *  *
 * *
 **
 *

*/



#include <bits/stdc++.h>
using namespace std;

void helper(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(i==0 or j==0 or i==n-1 or j==n-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


int main()
{
    int n=6;
    helper(n);
    return 0;
}