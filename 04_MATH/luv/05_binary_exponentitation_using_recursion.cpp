#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binaryExp(int a,int b){
    if(b<=0)return 1;
    int ans=binaryExp(a,b/2);
    if(b&1)return a*ans*ans;
    return ans*ans;
}

int main()
{
    int a=2,b=4;
    int ans=binaryExp(a,b);
    cout<<ans<<endl;
    return 0;
}