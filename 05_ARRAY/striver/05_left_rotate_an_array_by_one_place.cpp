/*

 ^ LINK : https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

 * Sample input 1:
   4
   5 7 3 2 
 * Sample output 1:
   7 3 2 5
*/

#include <bits/stdc++.h>
using namespace std;

// void leftRotate(vector<int>&vect){
//     int n=vect.size();
//     vector<int>temp;
//     for(int i=1;i<n;i++){
//         temp.push_back(vect[i]);
//     }
//     vect[n-1]=vect[0];
//     for(int i=0;i<n;i++){
//         vect[i]=temp[i];
//     }
// }
/*

 * TC : O(n)
 * SC : O(n)

*/

void leftRotate(vector<int>&vect){
    int n=vect.size();
    for(int i=0;i<n-1;i++){
        swap(vect[i],vect[i+1]);
    }
}
/*

 * TC : O(n)
 * SC : O(1)

*/


int main()
{
    vector<int>vect={0,0,1,1,1,2,2,3,3,4};
    leftRotate(vect);
    for(auto x:vect){
        cout<<x<<" ";
    }
    return 0;
}