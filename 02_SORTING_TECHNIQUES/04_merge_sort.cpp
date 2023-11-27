/*

 Divide and conquer algorithm to sort an array

 & TIME COMPLEXITY =>

   BEST = O(nlogn)
   AVG = O(nlogn)
   WORST = o(nlogn)

 & SPACE COMPLEXITY =>

   O(n)

  ! WHY WE ARE USING (L < R) IN MERGEESORT


      3 2 4 1
       /  \
    3 2    4 1
    / \    / \
   3   2  4   1  
   => yaha par smajna hai 3(index : 0) 
   => low=0, high=0 basically iske aage nahi chalna chayiye 
   => lekin agar hum l<=r karenge to iske aage bhi chalega aur infinte chalega

   ! WORST CASE COMPLEXITY

   The worst-case scenario for Merge Sort typically occurs when the array is in reverse order or sorted in the opposite direction from the order in which the algorithm combines arrays. This situation causes the maximum number of comparisons and splits at each level of recursion. 
    

*/

#include <bits/stdc++.h>
using namespace std;

void merger(vector<int> &arr, int l, int m, int r)
{
    vector<int> vect1, vect2;
    for (int i = l; i <= m; i++)
    {
        vect1.push_back(arr[i]);
    }
    for (int i = m + 1; i <= r; i++)
    {
        vect2.push_back(arr[i]);
    }
    int i = 0, j = 0, n1 = vect1.size(), n2 = vect2.size(), ind = l;
    while (i < n1 and j < n2)
    {
        if (vect1[i] < vect2[j])
        {
            arr[ind++] = vect1[i++];
        }
        else
        {
            arr[ind++] = vect2[j++];
        }
    }
    while (i < n1)
    {
        arr[ind++] = vect1[i++];
    }
    while (j < n2)
    {
        arr[ind++] = vect2[j++];
    }
}

void mergeSort(vector<int> &vect, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(vect, low, mid);
        mergeSort(vect, mid + 1, high);
        merger(vect, low, mid, high);
    }
}

int main()
{
    vector<int> vect = {2, 1, 3, 8, 6, 5, 7, 4};
    int n = vect.size();
    mergeSort(vect, 0, n - 1);
    for (auto x : vect)
    {
        cout << x << " ";
    }
    return 0;
}