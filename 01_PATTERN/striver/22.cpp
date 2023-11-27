/*
 n=4

 4 4 4 4 4 4 4
 4 3 3 3 3 3 4
 4 3 2 2 2 3 4
 4 3 2 1 2 3 4
 4 3 2 2 2 3 4
 4 3 3 3 3 3 4
 4 4 4 4 4 4 4

 AFTER SUBTRACTING EACH ELEMENT BY N.

 0 0 0 0 0 0 0
 0 1 1 1 1 1 0
 0 1 2 2 2 1 0
 0 1 2 3 2 1 0
 0 1 2 2 2 1 0
 0 1 1 1 1 1 0
 0 0 0 0 0 0 0



*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            cout << n - min({top, left, right, bottom}) << " ";
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