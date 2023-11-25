/*
 n=5

 **********
 ****  ****
 ***    ***
 **      **
 *        *
 *        *
 **      **
 ***    ***
 ****  ****
 **********

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 0; i < n; i++)
    {

        // UPPER HALF
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // LOWER HALF

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i - 1); k++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
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