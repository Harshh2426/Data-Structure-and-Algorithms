/*
 n=5

     1
    121
   12321
  1234321
 123454321

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int l=0;
        for(int k=1;k<=i;k++){
            cout<<++l;
        }
        for(int m=i-1;m>0;m--){
            cout<< --l;
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