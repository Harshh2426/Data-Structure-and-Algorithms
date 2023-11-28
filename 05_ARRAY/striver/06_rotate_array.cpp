/*

 ^ LINK : https://leetcode.com/problems/rotate-array/

 * Input: nums = [1,2,3,4,5,6,7], k = 3
 * Output: [5,6,7,1,2,3,4]
 

  & AGAR LEFT SHIFT KARNA HAI TO LOOP 0 SE START HOGA SWAP(VECT[I],VECT[I+1])
  & AGAR RIGHT SHIFT KARNA HAI TO LOOP N-1 SE START HOGA SWAP(VECT[I-1],VECT[I])

*/

#include <bits/stdc++.h>
using namespace std;

// void rotateArray(vector<int>&vect, int d){
//     int n=vect.size();
//     for(int i=0;i<d;i++){
//         for(int j=n-1;j>0;j--){
//             swap(vect[j-1],vect[j]);
//         }
//     }
// }
/*

 * TC : O(n*d)
 * SC : O(1)

*/

void rotateArray(vector<int>&vect,int d){
    int n=vect.size();
    reverse(vect.begin(),vect.begin()+n-d);
    reverse(vect.begin()+n-d,vect.end());
    reverse(vect.begin(),vect.end());
}
/*

 * TC : O(3*n) = O(n)
 * SC : O(1)

*/


int main()
{
    vector<int>vect={1,2,3,4,5,6,7};
    int d=3;
    rotateArray(vect,d);
    for(auto x:vect){
        cout<<x<<" ";
    }
    return 0;
}