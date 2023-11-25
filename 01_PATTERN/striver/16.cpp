/*
 n=5

 A
 BB
 CCC
 DDDD
 EEEEE

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    char a='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
        }
        cout<<endl;
        a++;
    }
}

int main()
{
    int n = 6;
    helper(n);
    return 0;
}