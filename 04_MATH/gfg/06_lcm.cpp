/*

! INPUT
 2 4

!OUTPUT
 4


*/



#include <bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
    int gcd=__gcd(a,b);
    int mul=a*b;
    return mul/gcd;
}
/*
  * TIME COMPLEXITY
   O(min(a,b)) 
*/




int main()
{
    int a=2,b=4;
    int ans=lcm(a,b);
    cout<<ans<<endl;
    return 0;
}