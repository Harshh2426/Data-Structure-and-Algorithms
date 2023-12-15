/*

 * Input: nums = [3,2,3]
 * Output: [3]

*/

#include <bits/stdc++.h>
using namespace std;


// vector<int> majorityElement2(vector<int> &nums)
// {
//     int n = nums.size();
//     unordered_map<int, int> mp;
//     vector<int> vect;
//     for (auto x : nums)
//     {
//         mp[x]++;
//     }
//     for (auto x : mp)
//     {
//         if (x.second > (n / 3))
//         {
//             vect.push_back(x.first);
//         }
//     }
//     return vect;
// }
/*

 * TC : O(n)
 * SC : O(n)

*/
vector<int> majorityElement2(vector<int> &nums)
{
    int n = nums.size();
    int ele1=-1,ele2=-1,cnt1=0,cnt2=0;
    vector<int> vect;
    for(int i=0;i<n;i++){
        if(ele1==nums[i]){
            cnt1++;
        }
        else if(ele2==nums[i]){
            cnt2++;
        }
        else if(cnt1==0){
            ele1=nums[i];
            cnt1=1;
        }
        else if(cnt2==0){
            ele2=nums[i];
            cnt2=1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    for(auto x:nums){
        if(x==ele1){
            cnt1++;
        }
        if(x==ele2 and ele1!=ele2){
            cnt2++;
        }
    }
    if(cnt1>(n/3))vect.push_back(ele1);
    if(cnt2>(n/3))vect.push_back(ele2);
    return vect;
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {3, 2, 3};
    vector<int> ans = majorityElement2(vect);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}