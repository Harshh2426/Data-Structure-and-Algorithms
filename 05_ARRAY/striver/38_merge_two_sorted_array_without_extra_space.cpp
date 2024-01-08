/*

 * Sample Input 1:
 * 3 4
 * 2 3 4 5
 * Sample Output 1:
 * 1 2 3 4 5 8 8


*/

#include <bits/stdc++.h>
using namespace std;

// void mergeTwoSortedArray(vector<int> &vect1, vector<int> &vect2)
// {
//     int n = vect1.size(), m = vect2.size();
//     vector<int>vect;
//     for(auto x:vect1){
//         vect.push_back(x);
//     }
//     for(auto x:vect2){
//         vect.push_back(x);
//     }
//     sort(vect.begin(),vect.end());
//     for(int i=0;i<n;i++){
//         vect1[i]=vect[i];
//     }
//     for(int i=n;i<n+m;i++){
//         vect2[i-n]=vect[i];
//     }
// }

/*

 * TC : O((n+m)log(n+m))
 * SC : O(n+m)

*/

// void mergeTwoSortedArray(vector<int> &vect1, vector<int> &vect2)
// {
//     int n = vect1.size(), m = vect2.size();
//     int i=0,j=0;
//     while(i<n and j<m){
//         if(vect1[i]<vect2[j]){
//             i++;
//         }
//         else{
//             swap(vect1[i],vect2[j]);
//             i++;
//             sort(vect2.begin(),vect2.end());
//         }
//     }
// }

/*

 * TC : O(min(n, m)) + O(n*logn) + O(m*logm)
 * SC : O(1)

*/

void mergeTwoSortedArray(vector<int> &vect1, vector<int> &vect2)
{
    int n = vect1.size(), m = vect2.size();
    int len = n + m;
    int gap = (len / 2) + (len % 2);
    while (gap > 0)
    {
        int left = 0, right = gap;
        while (right < len)
        {
            if (left < n and right >= n and vect1[left] > vect2[right - n])
            {
                swap(vect1[left], vect2[right - n]);
            }
            else if (left < n and right < n and vect1[left] > vect1[right])
            {
                swap(vect1[left], vect1[right]);
            }
            else if (left >= n and right >= n and vect2[left - n] > vect2[right - n])
            {
                swap(vect2[left - n], vect2[right - n]);
            }
            left++;
            right++;
        }
        if (gap == 1)
        {
            return;
        }
        gap = (gap / 2) + (gap % 2);
    }
}

/*

 * TC : O((n+m)log(n+m))
 * SC : O(1)

*/

int main()
{
    vector<int> vect1 = {1, 8, 8};
    vector<int> vect2 = {2, 3, 4, 5};
    mergeTwoSortedArray(vect1, vect2);
    int n = vect1.size(), m = vect2.size();
    for (int i = 0; i < n; i++)
    {
        cout << vect1[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << vect2[i] << " ";
    }
    return 0;
}