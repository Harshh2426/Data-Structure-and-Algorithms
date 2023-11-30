/*

 ! LINK : https://leetcode.com/problems/two-sum/

 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &vect, int d)
{
    int n = vect.size();
    vector<int> temp;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.count(d - vect[i]))
        {
            temp.push_back(mp[d - vect[i]]);
            temp.push_back(i);
            return temp;
        }
        mp[vect[i]] = i;
    }
    return {-1, -1};
}
/*

 * TC : O(n)
 * SC : O(n)

*/

int main()
{
    vector<int> vect = {2, 7, 11, 15};
    int k = 9;
    vector<int> ans = twoSum(vect, k);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}