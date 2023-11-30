/*

 ! LINK : https://leetcode.com/problems/single-number/

 * Input: nums = [4,1,2,1,2]
 * Output: 4

*/

#include <bits/stdc++.h>
using namespace std;

int singleNUmber(vector<int> &vect)
{
    int n= vect.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[vect[i]]++;
    }
    for(auto x:mp){
        if(x.second==1){
            return x.first;
        }
    }
    return -1;
}
/*

 * TC : O(n)
 * SC : O(n)

*/

// int singleNUmber(vector<int> &vect)
// {
//     int n= vect.size();
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans=ans^vect[i];
//     }
//     return ans;
// }
/*

 * TC : O(n)
 * SC : O(1)

*/


int main()
{
    vector<int> vect = {4,1,2,1,2};
    int ans = singleNUmber(vect);
    cout << ans << endl;
    return 0;
}