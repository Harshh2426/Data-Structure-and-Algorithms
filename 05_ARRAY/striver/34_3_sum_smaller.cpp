/*

 * Input: nums = [-2,0,1,3], and target = 2
 * Output: 2
 * Explanation: Because there are two triplets which sums are less than 2:
 *            [-2,0,1]
 *            [-2,0,3]


*/

#include <bits/stdc++.h>
using namespace std;

// int threeSumWithSmaller(vector<int> &nums,int target)
// {
//     int n = nums.size(),ans=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (nums[i] + nums[j] + nums[k] < target)
//                 {
//                     ans++;
//                 }
//             }
//         }
//     }
//     return ans;
// }

/*

 * TC : O(n^3)
 * SC : O(n)

*/

int threeSumWithSmaller(vector<int> &nums, int target)
{

    int n = nums.size();
    int ans = 0,cnt=0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int ans = nums[i] + nums[low] + nums[high];

            if (ans >= target)
            {
                high--;
            }
            else
            {
                cnt+=(high-low);
                low++;
            }
        }
    }
    return cnt;
}

/*

 * TC : O(n^2)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {-2, 0, 1, 3};
    int target = 2;
    int ans = threeSumWithSmaller(vect, target);
    cout << ans << endl;
    return 0;
}