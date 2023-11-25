/*
 n=5

 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    int l=1;
    for (int i = 1; i <=n;i++)
    {
        for(int k=1;k<=i;k++){
            cout<<l++<<" ";
        }

        cout << endl;
    }
}

int main()
{
    int n = 6;
    helper(n);
    return 0;
}