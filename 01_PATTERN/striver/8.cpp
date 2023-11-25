/*
 n=5

 *********
  *******
   *****
    ***
     *

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = n - 1; i >=0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
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