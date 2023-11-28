/*

! INPUT
2 3

!OUTPUT
8


! INPUT
2 -3

!OUTPUT
0.125

*/

#include <bits/stdc++.h>
using namespace std;

double power1(int x,int n){

    /*
      ! This approach is known as MODULAR EXPONENTIATION
    */

    double ans=1;
    bool flag=false;
    if(n<0){
        flag=true;
        n=-1*n;
    }
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    if(flag==true){
        ans=1/ans;
    }
    return ans;
}
/*
 * TIME COMPLEXITY :
   O(n) 
*/

double power2(int x,int n){

    /*
      ! This approach is known as BINARY EXPONENTIATION
    */

    double ans=1;
    bool flag=false;
    if(n<0){
        flag=true;
        n=-1*n;
    }
    while(n){
        if(n&1){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    if(flag==true){
        ans=1/ans;
    }
    return ans;
}
/*
 * TIME COMPLEXITY :
   O(log(n)) 
*/

double power3(int x,int n){
    return pow(x,n);
}
/*
 * TIME COMPLEXITY :
   O(log(n)) 
*/

int main()
{
    int x = 2, n = -3;
    double ans1=power1(x,n);
    double ans2=power2(x,n);
    double ans3=power3(x,n);
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

    return 0;
}