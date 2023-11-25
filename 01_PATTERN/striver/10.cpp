/*
 n=5

 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n-2; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
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