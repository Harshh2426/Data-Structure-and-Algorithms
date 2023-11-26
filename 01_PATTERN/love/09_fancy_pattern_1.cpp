/*
 n=5

 ********1********
 *******2*2*******
 ******3*3*3******
 *****4*4*4*4*****

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 9-i; j++)
        {
            cout<<"*";
        }
        int l=0;
        for(int j=1;j<2*i;j++){
            if(l%2==0){
                cout<<i;
            }
            else{
                cout<<"*";
            }
            l++;
        }
        for (int j = 1; j <= 9-i; j++)
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