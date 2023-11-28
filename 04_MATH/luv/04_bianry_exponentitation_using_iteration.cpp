#include <bits/stdc++.h>
using namespace std;
#define ll long long


int binaryExp(int a,int b){
    ll ans=1;
    while(b){
        if(b&1){
            ans=ans*a;
        }
        a=a*1ll*a;
        b=b>>1;
    }
    return ans;
}

int main()
{
    int a=2,b=4;
    int ans=binaryExp(a,b);
    cout<<ans<<endl;
    return 0;
}