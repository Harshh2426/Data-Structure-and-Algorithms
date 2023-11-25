/*
 n=4

 ****
 ****
 ****
 ****

*/



#include <bits/stdc++.h>
using namespace std;

void helper(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
    int n=4;
    helper(n);
    return 0;
}