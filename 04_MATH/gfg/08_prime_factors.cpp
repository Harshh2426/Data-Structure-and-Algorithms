/*

! INPUT
12

!OUTPUT
2, 3

*/



#include <bits/stdc++.h>
using namespace std;


vector<int>primeFactors1(int n){
    vector<int>vect;
    while(n%2==0){
        vect.push_back(2);
        n=n/2;
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            vect.push_back(i);
            n=n/i;
        }
    }
    if(n>2)vect.push_back(n);
    return vect;
}
/*
 * TIME COMPLEXITY:
  O(sqrt(n))
*/

vector<int>primeFactors2(int n){
    vector<int>vect;
    while(n%2==0){
        vect.push_back(2);
        n=n/2;
    }
    while(n%3==0){
        vect.push_back(3);
        n=n/3;
    }
    for(int i=5;i*i<=n;i+=6){
        while(n%i==0){
            vect.push_back(i);
            n=n/i;
        }
        while(n%(i+2)==0){
            vect.push_back(i+2);
            n=n/(i+2);
        }
    }
    if(n>2)vect.push_back(n);
    return vect;
}
/*
 * TIME COMPLEXITY:
  O(sqrt(n))
*/


int main()
{
    int n=1337;
    vector<int>ans1=primeFactors1(n);
    vector<int>ans2=primeFactors2(n);
    for(auto x:ans1){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:ans2){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}