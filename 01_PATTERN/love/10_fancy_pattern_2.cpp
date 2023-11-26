/*
 n=4

 1
 2*3
 4*5*6
 7*8*9*10
 7*8*9*10
 4*5*6
 2*3
 1

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    // UPPER PART
    int l = 1;
    for (int i = 0; i < n; i++)
    {
        int d = 0;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (d % 2 == 0)
            {
                cout << l++;
            }
            else
            {
                cout << "*";
            }
            d++;
        }
        cout << endl;
    }

    // LOWER PART
    int r = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        int m = r * (r + 1) / 2;
        int d = 0;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (d % 2 == 0)
            {
                cout << ++m;
            }
            else
            {
                cout << "*";
            }
            d++;
        }
        r--;
        cout << endl;
    }
}

int main()
{
    int n = 4;
    helper(n);
    return 0;
}