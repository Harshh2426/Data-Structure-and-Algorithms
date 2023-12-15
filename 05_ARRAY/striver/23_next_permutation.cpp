/*

 * Input: nums = [1,2,3,2,1,5,3,1]
 * Output: [1, 2, 3, 2, 3, 1, 1, 5 ]

*/

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int i = 0, n = nums.size();
    for (i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
            break;
    }
    if (i < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {
        int j;
        for (j = n - 1; j > i; j--)
        {
            if (nums[i] < nums[j])
                break;
        }
        swap(nums[i], nums[j]);
        reverse(nums.begin() + i + 1, nums.end());
    }
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {1, 2, 3, 2, 1, 5, 3, 1};
    nextPermutation(vect);
    for (auto x : vect)
    {
        cout << x << " ";
    }
    return 0;
}