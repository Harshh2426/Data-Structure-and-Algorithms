/*

 * LINK : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

*/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0, j = 0, n = nums.size();
    while (j < n)
    {
        if (nums[i] != nums[j])
        {
            nums[++i] = nums[j];
        }
        j++;
    }
    return i + 1;
}

int main()
{
    vector<int> vect = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int ans = removeDuplicates(vect);
    cout << ans << endl;
    for (auto x : vect)
    {
        cout << x << " ";
    }
}