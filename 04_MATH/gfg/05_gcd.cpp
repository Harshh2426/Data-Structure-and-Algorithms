/*

! INPUT
 2 4

!OUTPUT
 2


*/



#include <bits/stdc++.h>
using namespace std;

int gcd1(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a==b)return a;
    if(a<b){
        return gcd1(a,b-a);
    }
    return gcd1(a-b,b);
}
/*
  * TIME COMPLEXITY
   O(min(a,b)) 
*/

int gcd2(int a,int b){
    if(b==0)return a;
    return gcd2(b,a%b);
}
/*
  * TIME COMPLEXITY
   O(log(min(a,b))) 
*/

int gcd3(int a,int b){
    return __gcd(a,b);
}
/*
  * TIME COMPLEXITY
   O(log(min(a,b))) 
*/


int main()
{
    int a=2,b=5;
    int ans1=gcd1(a,b);
    int ans2=gcd2(a,b);
    int ans3=gcd3(a,b);
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    return 0;
}