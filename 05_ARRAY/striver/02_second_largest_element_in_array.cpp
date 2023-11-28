/*

* Sample Input 1 :
  4
  3 4 5 2
* Sample Output 1 :
  4

*/

#include <bits/stdc++.h>
using namespace std;

// int secondLargest(vector<int>&vect){
//     int maxElement=INT_MIN;
//     int secLarge=INT_MIN;
//     int n=vect.size();
//     for(int i=0;i<n;i++){
//         maxElement=max(maxElement,vect[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(vect[i]>secLarge and vect[i]!=maxElement){
//             secLarge=vect[i];
//         }
//     }
//     return secLarge;
// }

/*

* TC : O(2*n) = O(n)
* SC : O(1)

*/

// int secondLargest(vector<int>&vect){
//     int large=INT_MIN,secLarge=INT_MIN,n=vect.size();
//     for(int i=0;i<n;i++){
//         if(vect[i]>large){
//             secLarge=large;
//             large=vect[i];
//         }
//         else if(vect[i]>secLarge and vect[i]!=large){
//             secLarge=vect[i];
//         }
//     }
//     return secLarge;
// }

/*

* TC : O(n)
* SC : O(1)

*/


int secondLargest(vector<int>&vect){
    set<int>s;
    for(auto x:vect){
        s.insert(x);
    }
    if(s.size()<2){
        return -1;
    }
    auto it=prev(vect.end(),2);
    return *it;
}

/*

* TC : O(nlogn)
* SC : O(n)

*/


int main()
{
    vector<int>vect={5,1,5,3,6,31};
    int ans=secondLargest(vect);
    cout<<ans<<endl;
    return 0;
}