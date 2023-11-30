/*

 ! LINK : https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

 * Sample Input 1 :
   7 3
   1 2 3 1 1 1 1

 * Sample Output 1 :
   3

*/

#include <bits/stdc++.h>
using namespace std;

// int longestSubarraySumK(vector<int> &vect,int d)
// {
//     int n= vect.size();
//     int sum=0,len=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 sum+=vect[k];
//             }
//             if(sum==d){
//                 len=max(len,j-i+1);
//             }
//             sum=0;
//         }
//     }
//     return len;
// }
/*

 * TC : O(n^3)
 * SC : O(1)

*/

// int longestSubarraySumK(vector<int> &vect, int d)
// {
//     int n = vect.size();
//     int sum = 0, len = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             sum += vect[j];
//             if (sum == d)
//             {
//                 len = max(len, j - i + 1);
//             }
//         }
//         sum = 0;
//     }
//     return len;
// }
/*

 * TC : O(n^2)
 * SC : O(n)

*/

int longestSubarraySumK(vector<int> &vect, int d)
{
    int n = vect.size();
    int sum = 0, len = 0;
    int i=0,j=0;
    while(j<n){
        sum+=vect[j];
        if(sum<d){
            j++;
        }
        else if(sum==d){
            len=max(len,j-i+1);
            j++;
        }
        else{
            while(sum>d){
                sum-=vect[i];
                i++;
            }
            if(sum==d){
                len=max(len,j-i+1);
            }
            j++;
        }
    }
    return len;
}
/*

 * TC : O(n^2)
 * SC : O(n)

*/


int main()
{
    // vect always contain positive integer
    vector<int> vect = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;
    int ans = longestSubarraySumK(vect, k);
    cout << ans << endl;
    return 0;
}