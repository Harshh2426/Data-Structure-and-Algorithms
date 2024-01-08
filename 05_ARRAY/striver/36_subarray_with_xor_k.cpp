/*

 *Input : [4, 2, 2, 6, 4]
 * K = 6
 * Output: 4

*/

#include <bits/stdc++.h>
using namespace std;

// int countSubarrayWithXorK(vector<int> &nums, int k)
// {
//     int n = nums.size(), sum = 0, ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum ^= nums[j];
//             if (sum == k)
//             {
//                 ans++;
//             }
//         }
//     }
//     return ans;
// }
/*

 * TC : O(n^2)
 * SC : O(1)

*/

int countSubarrayWithXorK(vector<int> &nums,int k)
{
    int n = nums.size(),sum=0,ans=0;
    unordered_map<int,int>mp;
    for (int i = 0;i<n;i++)
    {
        sum^=nums[i];
        if(sum==k)ans++;
        if(mp.find(sum^k)!=mp.end()){
            ans+=mp[sum^k];
        }
        mp[sum]++;
        
    }
    return ans;
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = countSubarrayWithXorK(vect, k);
    cout << ans << " ";

    return 0;
}