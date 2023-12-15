/*

 * Input: nums = [5,8,3,2,1,4]
 * Output: 5

*/

#include <bits/stdc++.h>
using namespace std;

// int longestConsecutiveSequence(vector<int> &nums)
// {
//     int n = nums.size(),ans=0;
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<n;i++){
//         int cnt=1;
//         for(int j=i;j<n-1;j++){   
//             if(nums[j]==nums[j+1])continue; // for removing the same element occurance
//             if((nums[j+1]-nums[j])!=1){
//                 break;
//             }
//             else{
//                 cnt++;
//             }
//         }
//         ans=max(ans,cnt);
//     }
//     return ans;
// }
/*

 * TC : O(n^2)
 * SC : O(1)

*/
int longestConsecutiveSequence(vector<int> &nums)
{
    int n = nums.size(),ans=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(auto p:mp){
        if(mp.find(p.first-1)==mp.end()){
            int x=p.first,cnt=0;
            while(mp.find(x)!=mp.end()){
                cnt++;
                x++;
            }
            ans=max(ans,cnt);
        }
    }
    return ans;
}
/*

 * TC : O(n)
 * SC : O(n)

*/

int main()
{
    vector<int> vect = {5,8,3,2,1,4};
    int ans=longestConsecutiveSequence(vect);
    cout<<ans<<endl;
    return 0;
}