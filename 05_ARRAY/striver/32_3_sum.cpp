/*

 * Input: nums = [-1,0,1,2,-1,-4]
 * Output: [[-1,-1,2],[-1,0,1]]

*/

#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> threeSum(vector<int> &nums)
// {

//     int n = nums.size();
//     set<vector<int>>s;
//     vector<vector<int>> v;
//     sort(nums.begin(),nums.end());
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (nums[i] + nums[j] + nums[k] == 0)
//                 {
//                     s.insert({nums[i], nums[j], nums[k]});
//                 }
//             }
//         }
//     }
//     for(auto x:s)v.push_back(x);
//     return v;
// }

/*

 * TC : O(n^3)
 * SC : O(n)

*/

vector<vector<int>> threeSum(vector<int> &nums)
{

    int n = nums.size();
    vector<vector<int>> v;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < n; i++)
    {
        int low=i+1,high=n-1;
        while(low<high){
            int ans=nums[i]+nums[low]+nums[high];

            if(ans==0){
                v.push_back({nums[i],nums[low],nums[high]});
                while(low+1<high and nums[low]==nums[low+1])low++;
                while(high-1>low and nums[high]==nums[high-1])high--;
                low++;
                high--;
            }
            else if(ans<0){
                low++;
            }
            else{
                high--;
            }
        }
        while(i<n-2 and nums[i]==nums[i+1])i++;
    }
    return v;
}

/*

 * TC : O(n^2)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(vect);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}