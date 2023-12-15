/*

 * Input: nums = [5,8,3,2,1,4]
 * Output: 2

*/

#include <bits/stdc++.h>
using namespace std;

// int longestConsecutiveSequence(vector<int> &nums,int k)
// {
//     int n=nums.size(),cnt=0,sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             sum+=nums[j];
//             if(sum==k)cnt++;
//         }
//         sum=0;
//     }
//     return cnt;
// }
/*

 * TC : O(n^2)
 * SC : O(1)

*/
int subarraySumK(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int sum = 0, cnt = 0, n = nums.size();
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (mp.find(sum - k) != mp.end())
        {
            cnt += mp[sum - k];
        }
        mp[sum]++;
    }
    return cnt;
}
/*

 * TC : O(n)
 * SC : O(n)

*/

int main()
{
    vector<int> vect = {5, 8, 3, 2, 1, 4};
    int k = 3;
    int ans = subarraySumK(vect, k);
    cout << ans << endl;
    return 0;
}