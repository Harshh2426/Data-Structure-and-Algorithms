/*

 ! LINK : https://leetcode.com/problems/max-consecutive-ones/

 * Input: nums = [1,1,0,1,1,1]
 * Output: 3

*/

#include <bits/stdc++.h>
using namespace std;

int maximumConsecutiveOnes(vector<int> &vect)
{
    int n= vect.size();
    int cnt=0,maxOnes=0;
    for(int i=0;i<n;i++){
        if(vect[i]==1){
            cnt++;
            maxOnes=max(maxOnes,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxOnes;
}
/*

 * TC : O(n)
 * SC : O(1)

*/


int main()
{
    vector<int> vect = {1,1,0,1,1,1};
    int ans = maximumConsecutiveOnes(vect);
    cout << ans << endl;
    return 0;
}