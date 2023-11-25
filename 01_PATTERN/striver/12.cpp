/*
 n=4

 1      1
 12    21
 123  321
 12344321

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << "_";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    helper(n);
    return 0;
}