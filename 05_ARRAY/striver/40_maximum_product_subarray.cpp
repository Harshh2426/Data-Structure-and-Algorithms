/*

 * Input: nums = [2,3,-2,4]
 * Output: 6

*/

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int res = INT_MIN;
    int curr = 1;
    for (int i = 0; i < nums.size(); i++)
    {

        curr *= nums[i];
        res = max(res, curr);
        if (curr == 0)
        {
            curr = 1;
        }
    }
    curr = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        curr *= nums[i];
        res = max(res, curr);
        if (curr == 0)
        {
            curr = 1;
        }
    }

    return res;
}

/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {1, 2, 3, 2};
    int ans = maxProduct(vect);
    cout<<ans<<endl;
    return 0;
}