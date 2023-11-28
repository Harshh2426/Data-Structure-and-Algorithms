/*

 * Input: nums = [0,1,0,3,12], key = 3
 * Output: true
 
*/

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>&vect,int key){
    int n=vect.size();
    for(int i=0;i<n;i++){
        if(vect[i]==key){
            return true;
        }
    }
    return false;
}
/*

 * TC : O(n)
 * SC : O(1)

*/


int main()
{
    vector<int>vect={0,1,0,3,12};
    int key=3;
    bool ans=linearSearch(vect,key);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}