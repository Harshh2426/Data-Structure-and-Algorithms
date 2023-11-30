/*

 ! LINK : https://leetcode.com/problems/rearrange-array-elements-by-sign/

 * Input: nums = [3,1,-2,-5,2,-4]
 * Output: [3,-2,1,-5,2,-4]

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> pos, neg;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            neg.push_back(nums[i]);
        }
        else
        {
            pos.push_back(nums[i]);
        }
    }
    int p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            nums[i] = pos[p++];
        }
        else
        {
            nums[i] = neg[q++];
        }
    }
    return nums;
}
/*

 * TC : O(n)
 * SC : O(n)

*/

int main()
{
    vector<int> vect = {3,1,-2,-5,2,-4};
    vector<int> ans = rearrangeArray(vect);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}