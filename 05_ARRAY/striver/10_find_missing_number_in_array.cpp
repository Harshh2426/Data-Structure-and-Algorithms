/*

 ! LINK : https://leetcode.com/problems/missing-number/

 * Input: nums = [3,0,1]
 * Output: 2

*/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &vect)
{
    int n= vect.size(),ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    for(auto x:vect){
        ans-=x;
    }
    return ans;
}
/*

 * TC : O(2*n) = O(n)
 * SC : O(1)

*/

int missingNumber(vector<int> &vect)
{
    int n= vect.size(),ans=0;
    ans=(n*(n+1))/2;
    for(auto x:vect){
        ans-=x;
    }
    return ans;
}
/*

 * TC : = O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {3, 0, 1};
    int ans = missingNumber(vect);
    cout << ans << endl;
    return 0;
}