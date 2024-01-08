/*

 * Sample Input 1:
 * 4
 * 1 0 -1 1
 * Sample Output 1:
 * 3

*/

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithZeroSum(vector<int> &nums)
{
    int n = nums.size(),sum=0,ans=0;
    for (int i = 0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==0){
                ans=max(ans,j-i+1);
            }
        }
    }
    return ans;
}
/*

 * TC : O(n^2)
 * SC : O(1)

*/


// int longestSubarrayWithZeroSum(vector<int> &nums)
// {
//     int n = nums.size(),sum=0,ans=0;
//     unordered_map<int,int>mp;
//     mp[0]=-1;
//     for (int i = 0;i<n;i++)
//     {
//         sum+=nums[i];
//         if(mp.find(sum)!=mp.end()){
//             ans=max(ans,i-mp[sum]);
//         }
//         if(mp.find(sum)==mp.end()){
//             mp[sum]++;
//         }
//     }
//     return ans;
// }
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {1, 0, -1, 1};
    int ans = longestSubarrayWithZeroSum(vect);
    cout << ans << " ";

    return 0;
}