/*

 * Sample Input 1:
 * 4
 * 1 2 3 2
 * Sample Output 1:
 * 2 4

*/

#include <bits/stdc++.h>
using namespace std;

// vector<int> missingAndRepeating(vector<int> &vect)
// {
//     int n = vect.size();
//     unordered_map<int,int>mp;
//     for(auto x:vect){
//         mp[x]++;
//     }
//     int missing=-1,repeating=-1;
//     for(int i=1;i<=n;i++){
//         if(mp.find(i)==mp.end()){
//             missing=i;
//         }
//         if(mp[i]==2){
//             repeating=i;
//         }
//     }
//     vector<int>ans;
//     ans.push_back(missing);
//     ans.push_back(repeating);
//     return ans;
// }

/*

 * TC : O((n+m)log(n+m))
 * SC : O(1)

*/



vector<int> missingAndRepeating(vector<int> &vect)
{
    int n = vect.size();
    int num=0;
    for(auto x:vect){
        num=num^x;
    }
    for(int i=0;i<n;i++){
        num=num^(i+1);
    }
}

/*

 * TC : O((n+m)log(n+m))
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {1, 2, 3, 2};
    vector<int>ans=missingAndRepeating(vect);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}