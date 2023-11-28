/*

! INPUT
1234

!OUTPUT
4

*/



#include <bits/stdc++.h>
using namespace std;

int countDigits1(int n){
    int ans=0;
    while(n){
        ans++;
        n=n/10;
    }
    return ans;
}
/*
  * TIME COMPLEXITY
   O(d) where n is the number of digits
*/

int countDigits2(int n){
    return ceil(log10(n));
}
/*
  * TIME COMPLEXITY
   O(1)
*/


int main()
{
    int n=1234;
    int ans1=countDigits1(n);
    int ans2=countDigits1(n);
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}