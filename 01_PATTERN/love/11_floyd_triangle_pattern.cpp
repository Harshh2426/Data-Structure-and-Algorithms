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
    int d=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<d++<<" ";
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