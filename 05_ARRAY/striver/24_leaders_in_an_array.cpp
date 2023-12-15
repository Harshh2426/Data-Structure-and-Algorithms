/*

 * Sample Input:
   1 2 2 1


 * Sample Output 1:
   1 2

*/

#include <bits/stdc++.h>
using namespace std;

// vector<int> leadersInArray(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> vect;
//     for (int i = 0; i < n; i++)
//     {
//         int cnt=0;
//         for (int j = i+1; j < n; j++)
//         {
//             if (nums[i] <= nums[j])
//             {
//                 cnt = 1;
//                 break;
//             }
//         }
//         if(cnt==0)vect.push_back(nums[i]);
//     }
//     return vect;
// }
/*

 * TC : O(n^2)
 * SC : O(1)

*/

vector<int> leadersInArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> vect;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] > maxi)
        {
            vect.push_back(nums[i]);
        }
        maxi = max(maxi, nums[i]);
    }
    return vect;
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {1, 2, 2, 1};
    vector<int> ans = leadersInArray(vect);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}