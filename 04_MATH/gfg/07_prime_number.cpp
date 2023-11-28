/*

! INPUT
 2

!OUTPUT
 true(1)

! INPUT
 4

!OUTPUT
 false(0)

*/



#include <bits/stdc++.h>
using namespace std;

bool primeNumber1(int n){
    if(n<=1)return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

/*
* TIME COMPLEXITY
O(n)
*/

bool primeNumber2(int n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

/*
* TIME COMPLEXITY
O(sqrt(n))
*/


bool primeNumber3(int n){
    if(n<=1)return false;
    if(n==2 or n==3)return true;
    if(n%2==0 or n%3==0)return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0)return false;
        if(n%(i+2)==0)return false;
    }
    return true;
}

/*
* TIME COMPLEXITY
O(sqrt(n))
*/


int main()
{
    int a=4;
    bool ans1=primeNumber1(a);
    bool ans2=primeNumber2(a);
    bool ans3=primeNumber3(a);
    cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    return 0;
}