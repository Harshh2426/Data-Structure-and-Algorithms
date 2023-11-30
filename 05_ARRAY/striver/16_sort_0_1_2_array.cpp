/*

 ! LINK : https://leetcode.com/problems/sort-colors/

 * Input: nums = [2,0,2,1,1,0]
 * Output: [0,0,1,1,2,2]

*/

#include <bits/stdc++.h>
using namespace std;

// void sort012(vector<int> &vect)
// {
//     int n = vect.size();
//     sort(vect.begin(),vect.end());
// }
/*

 * TC : O(nlogn)
 * SC : O(1)

*/


// void sort012(vector<int> &vect)
// {
//     int n = vect.size();
//     int zeroCnt=0,oneCnt=0,twoCnt=0;
//     for(int i=0;i<n;i++){
//         if(vect[i]==0)zeroCnt++;
//         else if(vect[i]==1)oneCnt++;
//         else twoCnt++;
//     }
//     for(int i=0;i<zeroCnt;i++){
//         vect[i]=0;
//     }
//     for(int i=0;i<oneCnt;i++){
//         vect[i+zeroCnt]=1;
//     }
//     for(int i=0;i<twoCnt;i++){
//         vect[i+zeroCnt+oneCnt]=2;
//     }
// }
/*

 * TC : O(2*n) = O(n)
 * SC : O(1)

*/


void sort012(vector<int> &vect)
{
    int n = vect.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(vect[mid]==0){
            swap(vect[low],vect[mid]);
            low++;
            mid++;
        }
        else if(vect[mid]==1){
            mid++;
        }
        else{
            swap(vect[mid],vect[high]);
            high--;
        }
    }
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {2,0,2,1,1,0};
    sort012(vect);
    for (auto x : vect)
    {
        cout << x << " ";
    }
    return 0;
}