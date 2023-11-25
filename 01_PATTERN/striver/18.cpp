/*
 n=5

 E
 D E
 C D E
 B C D E
 A B C D E

*/

#include <bits/stdc++.h>
using namespace std;

void helper(int n)
{
    char a='A'+n-1;
    for(int i=0;i<n;i++){
        char x=a;
        for(int j=0;j<=i;j++){
            cout<<x++ <<" ";
        }
        a--;
        cout<<endl;
    }
    
}

int main()
{
    int n = 6;
    helper(n);
    return 0;
}