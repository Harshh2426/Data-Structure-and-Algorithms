/*

 ! LINK : https://leetcode.com/problems/maximum-subarray/

 * Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 * Output: [4, -1, 2, 1]

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> maximumSubarray(vector<int> &vect)
{

    int n = vect.size();
    int ans=0,maxSum=INT_MIN;
    int st=0,ed=0;
    for(int i=0;i<n;i++){
        ans+=vect[i];
        if(maxSum<ans){
            maxSum=ans;
            ed=i;
        }
        if(ans<0){
            ans=0;
            st=i+1;
        }
    }
    vector<int>temp;
    for(int i=st;i<=ed;i++){
        temp.push_back(vect[i]);
    }
    return temp;
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> ans = maximumSubarray(vect);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}