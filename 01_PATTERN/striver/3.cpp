/*
 n=5

 1
 12
 123
 1234
 12345

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
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