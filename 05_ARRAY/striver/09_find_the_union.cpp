/*

 ! LINK : https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

 * Sample Input 1 :
   5 3
   1 2 3 4 6
   2 3 5
 * Sample Output 1 :
   1 2 3 4 5 6

*/

#include <bits/stdc++.h>
using namespace std;

// vector<int> unionArray(vector<int>&vect1,vector<int>&vect2){
//     int n1=vect1.size(),n2=vect2.size();
//     set<int>s;
//     for(int i=0;i<n1;i++){
//         s.insert(vect1[i]);
//     }
//     for(int i=0;i<n2;i++){
//         s.insert(vect2[i]);
//     }
//     vector<int>temp;
//     for(auto x:s){
//         temp.push_back(x);
//     }
//     return temp;
// }
/*

 * TC : O((n1+n2)log(n1+n2))
 * SC : O(n1+n2)

*/

vector<int> unionArray(vector<int> &vect1, vector<int> &vect2)
{
    int n1 = vect1.size(), n2 = vect2.size();
    vector<int> temp;
    int i1 = 0, i2 = 0;
    while (i1 < n1 and i2 < n2)
    {
        if (vect1[i1] < vect2[i2])
        {
            if (temp.empty() or temp.back() != vect1[i1])
            {
                temp.push_back(vect1[i1]);
            }
            i1++;
        }
        else
        {
            if (temp.empty() or temp.back() != vect2[i2])
            {
                temp.push_back(vect2[i2]);
            }
            i2++;
        }
    }
    while (i1 < n1)
    {
        if (temp.empty() or temp.back() != vect1[i1])
        {
            temp.push_back(vect1[i1]);
        }
        i1++;
    }
    while (i2 < n2)
    {
        if (temp.empty() or temp.back() != vect2[i2])
        {
            temp.push_back(vect2[i2]);
        }
        i2++;
    }
    return temp;
}
/*

 * TC : O(n1+n2)
 * SC : O(1)

*/

int main()
{
    vector<int> vect1 = {1, 2, 3, 4, 6};
    vector<int> vect2 = {2, 3, 5};
    vector<int> ans = unionArray(vect1, vect2);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}