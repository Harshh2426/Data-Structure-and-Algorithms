/*

 ^ LINK : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

 * Input: nums = [0,0,1,1,1,2,2,3,3,4]
 * Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

*/

#include <bits/stdc++.h>
using namespace std;

// int removeDuplicates(vector<int>&vect){
//     int n=vect.size();
//     set<int>s;
//     for(int i=0;i<n;i++){
//         s.insert(vect[i]);
//     }
//     int i=0;
//     for(auto x:s){
//         vect[i++]=x;
//     }
//     return i;
// }
/*

 * TC : O(nlogn)
 * SC : O(n)

*/

int removeDuplicates(vector<int>&vect){

    /*
    
    * THIS CODE IS ALSO AN EXAMPLE OF INPLACE SORTING
    
    */

    int n=vect.size();
    int i=0,j=0;
    while(j<n){
        if(vect[i]!=vect[j]){
            vect[++i]=vect[j];
        }
        j++;
    }
    return i+1;
}
/*

 * TC : O(n)
 * SC : O(1)

*/


int main()
{
    vector<int>vect={0,0,1,1,1,2,2,3,3,4};
    int ans=removeDuplicates(vect);
    cout<<ans<<endl;
    for(auto x:vect){
        cout<<x<<" ";
    }
    return 0;
}