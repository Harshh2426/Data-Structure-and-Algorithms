/*

 ! Number of positive and negative elements are not equal

 * Input: nums = [3,1,-2,-5,2,-4,4,8]
 * Output: [3,-2,1,-5,2,-4,4,8]

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray2(vector<int> &nums)
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
    if (pos.size() < neg.size())
    {

        for (int i = 0; i < pos.size(); i++)
        {
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        for(int i=2*pos.size();i<neg.size();i++){
            nums[i]=neg[i/2];
        }
    }
    else{
        for (int i = 0; i < neg.size(); i++)
        {
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        for(int i=2*neg.size();i<pos.size();i++){
            nums[i]=pos[i/2];
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
    vector<int> vect = {3, 1, -2, -5, 2, -4};
    vector<int> ans = rearrangeArray2(vect);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}