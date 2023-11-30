/*

 ! LINK : https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

 * Sample Input 1 :
   3 1
   -1 1 1

 * Sample Output 1 :
   3

*/

#include <bits/stdc++.h>
using namespace std;


int longestSubarraySumK2(vector<int> &vect, int d)
{
    int n = vect.size();
    int sum = 0, len = 0;
    unordered_map<int,int>mp;
    mp[0]=-1;
    for(int i=0;i<n;i++){
        sum+=vect[i];
        if(mp.count(sum-d)){
            len=max(len,i-mp[sum-d]);
        }
        if(mp.count(sum)==0){
            mp[sum]=i;
        }
    }
    return len;
}
/*

 * TC : O(n)
 * SC : O(n)

*/


int main()
{
    // vect contains both positive and negative integer
    vector<int> vect = {-1,1,1};
    int k = 1;
    int ans = longestSubarraySumK2(vect, k);
    cout << ans << endl;
    return 0;
}