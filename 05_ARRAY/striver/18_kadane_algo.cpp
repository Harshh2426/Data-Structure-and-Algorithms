/*

 ! LINK : https://leetcode.com/problems/maximum-subarray/

 * Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 * Output: 6

*/

#include <bits/stdc++.h>
using namespace std;

int maximumSubarray(vector<int> &vect)
{

/*

 ! THIS IS A FAMOUS ALGORITHM KNOWN AS KADANE ALGORITHM.

*/


    int n = vect.size();
    int ans=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        ans+=vect[i];
        if(maxSum<ans){
            maxSum=ans;
        }
        if(ans<0){
            ans=0;
        }
    }
    return maxSum;
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maximumSubarray(vect);
    cout << ans << endl;
    return 0;
}