/*
 n=5

 ABCDE
 ABCD
 ABC
 AB
 A

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    char a='A';
    for(int i=n-1;i>=0;i--){
        char d=a;
        for(int j=0;j<=i;j++){
            cout<<d++<<" ";
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