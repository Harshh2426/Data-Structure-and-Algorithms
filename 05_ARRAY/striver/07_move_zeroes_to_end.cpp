/*

 ^ LINK : https://leetcode.com/problems/move-zeroes/

 * Input: nums = [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 
*/

#include <bits/stdc++.h>
using namespace std;



// void moveZeroes(vector<int>&vect){
//     int n=vect.size();
//     vector<int>nonZero;
//     vector<int>zero;
//     for(int i=0;i<n;i++){
//         if(vect[i]!=0){
//             nonZero.push_back(vect[i]);
//         }
//         else{
//             zero.push_back(vect[i]);
//         }
//     }
//     int i=0;
//     for(auto x:nonZero){
//         vect[i++]=x;
//     }
//     for(auto x:zero){
//         vect[i++]=x;
//     }
// }
/*

 * TC : O(n)
 * SC : O(n)

*/


void moveZeroes(vector<int>&vect){
    int n=vect.size();
    int i=0,j=0;
    while(j<n){
        if(vect[j]!=0){
            swap(vect[i++],vect[j]);
        }
        j++;
    }
}
/*

 * TC : O(n)
 * SC : O(1)

*/


int main()
{
    vector<int>vect={0,1,0,3,12};
    moveZeroes(vect);
    for(auto x:vect){
        cout<<x<<" ";
    }
    return 0;
}