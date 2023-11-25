/*
 n=5

 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    int d = 1;
    for (int i = 0; i < n; i++)
    {
        int l = !d;
        for (int j = 0; j <= i; j++)
        {
            cout << l;
            l = !l;
        }

        cout << endl;
        d=!d;
    }
}

int main()
{
    int n = 6;
    helper(n);
    return 0;
}