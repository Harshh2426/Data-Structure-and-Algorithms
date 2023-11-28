/*

* Sample Input 1 :
  4
  1 2 3 4
* Sample Output 1 :
  1

*/

#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &vect)
{
    int n = vect.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (vect[i] > vect[i + 1])
        {
            return false;
        }
    }
    return true;
}
/*

* TC : O(n)
* SC : O(1)

*/

int main()
{
    vector<int> vect = {1, 2, 3, 4, 4, 5};
    int ans = checkSorted(vect);
    cout << ans << endl;
    return 0;
}

/*********************************************** LEETCODE ***********************************************/

/*

* LINK : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

*/

// bool check(vector<int> &nums)
// {
//     int cnt = 0;
//     int n = nums.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (nums[i] > nums[i + 1])
//         {
//             cnt++;
//         }
//     }
//     if (nums[0] < nums[n - 1])
//         cnt++;
//     if (cnt > 1)
//         return false;
//     return true;
// }