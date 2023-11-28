/*

! INPUT
5!

!OUTPUT
1

* Zero at the end is created when we multiply 2 and 5, so we have to count numbers of 5 because 2 is available in access.


*/



#include <bits/stdc++.h>
using namespace std;

int trailingZero(int n){
    int ans=0;
    for(int i=5;i<=n;i*=5){
      ans+=(n/i);
    }
    return ans;
}
/*
  * TIME COMPLEXITY
   O(log5(n)) 
*/


int main()
{
    int n=25;
    int ans=trailingZero(n);
    cout<<ans<<endl;
    return 0;
}