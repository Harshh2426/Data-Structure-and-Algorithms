/*

 * Input: nums = [1,0,-1,0,-2,2], target = 0
 * Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

*/

#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {

//     int n = nums.size();
//     set<vector<int>> s;
//     vector<vector<int>> v;
//     sort(nums.begin(), nums.end());
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 for (int l = k + 1; l < n; l++)
//                 {

//                     if (nums[i] + nums[j] + nums[k] + nums[l] == target)
//                     {
//                         s.insert({nums[i], nums[j], nums[k], nums[l]});
//                     }
//                 }
//             }
//         }
//     }
//     for (auto x : s)
//         v.push_back(x);
//     return v;
// }

/*

 * TC : O(n^4)
 * SC : O(n)

*/

vector<vector<int>> fourSum(vector<int> &nums,int target)
{

    int n = nums.size();
    vector<vector<int>> v;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int low = j + 1, high = n - 1;
            while (low < high)
            {
                int ans = nums[i] + nums[j] + nums[low] + nums[high];

                if (ans == target)
                {
                    v.push_back({nums[i], nums[j], nums[low], nums[high]});
                    while (low + 1 < high and nums[low] == nums[low + 1])
                        low++;
                    while (high - 1 > low and nums[high] == nums[high - 1])
                        high--;
                    low++;
                    high--;
                }
                else if (ans < target)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
            while(j<n-2 and nums[j]==nums[j+1])j++;
        }
        while (i < n - 3 and nums[i] == nums[i + 1])
            i++;
    }
    return v;
}

/*

 * TC : O(n^3)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = fourSum(vect, target);
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