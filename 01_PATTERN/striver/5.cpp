/*
 n=5

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
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
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