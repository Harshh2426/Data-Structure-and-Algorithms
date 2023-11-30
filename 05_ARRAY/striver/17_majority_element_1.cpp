/*

 ! LINK : https://leetcode.com/problems/majority-element/

 * Input: nums = [3,2,3]
 * Output: 3

*/

#include <bits/stdc++.h>
using namespace std;

// int majorityElement(vector<int> &vect)
// {
//     int n = vect.size();
//     unordered_map<int, int> mp;
//     for (auto x : vect)
//     {
//         mp[x]++;
//     }
//     for (auto x : mp)
//     {
//         if (x.second > (n / 2))
//         {
//             return x.first;
//         }
//     }
//     return -1;
// }
/*

 * TC : O(n)
 * SC : O(n)

*/


int majorityElement(vector<int> &vect)
{

/*

 ! THIS IS A FAMOUS ALGORITHM KNOWN AS MOORE VOTING ALGO.

*/

    int n = vect.size();
    int ans=-1,cnt=1;
    for(int i=0;i<n;i++){
        if(ans==vect[i]){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt==0){
            ans=vect[i];
            cnt=1;
        }
    }
    return ans;
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {3, 2, 3};
    int ans = majorityElement(vect);
    cout << ans << endl;
    return 0;
}