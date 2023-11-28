/*

! INPUT
5

!OUTPUT
120


*/



#include <bits/stdc++.h>
using namespace std;

int factorial1(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
/*
  * TIME COMPLEXITY
   O(n) 
*/

int factorial2(int n){
    if(n==0)return 1;
    return n*factorial2(n-1);
}
/*
  * TIME COMPLEXITY
   O(n)

 * SPACE COMPLEXITY
   O(n) Auxiliary space
*/


int main()
{
    int n=5;
    int ans1=factorial1(n);
    int ans2=factorial2(n);
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}