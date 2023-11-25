/*
 n=5

 A
 AB
 ABC
 ABCD
 ABCDE

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    char a='A';
    for(int i=0;i<n;i++){
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