/*
 n=4

    A
   ABA
  ABCBA
 ABCDCBA

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    char a='A';
    for(int i=0;i<n;i++){
        char d=a;
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<d++;
        }
        --d;
        for(int l=0;l<i;l++){
            cout<< --d;
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