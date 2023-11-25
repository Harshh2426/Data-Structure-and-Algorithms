/*
 n=4

 ****
 ****
 ****
 ****

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<"*";
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