/*

* Sample input 1:
  6
  4 7 8 6 7 6
* Sample output 1:
  8

*/

#include <bits/stdc++.h>
using namespace std;

// int largestElement(vector<int>&vect){
//     int maxElement=INT_MIN;
//     int n=vect.size();
//     for(int i=0;i<n;i++){
//         maxElement=max(maxElement,vect[i]);
//     }
//     return maxElement;
// }

/*

* TC : O(n)
* SC : O(1)

*/

int largestElement(vector<int>&vect){
    sort(vect.begin(),vect.end());
    return vect[vect.size()-1];
}

/*

* TC : O(nlogn)
* SC : O(1)

*/

// int largestElement(vector<int>&vect){
//     return *max_element(vect.begin(),vect.end());
// }

/*

* TC : O(n)
* SC : O(1)

*/


int main()
{
    vector<int>vect={5,1,5,3,6,31};
    int ans=largestElement(vect);
    cout<<ans<<endl;
    return 0;
}
