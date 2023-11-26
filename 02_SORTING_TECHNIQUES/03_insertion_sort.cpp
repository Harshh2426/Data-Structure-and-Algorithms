/*

 ek range main saare element sorted honge
    2,1,3,8,6,5,7,4
 => 2,1,3,8,6,5,7,4
    -
 => 1,2,3,8,6,5,7,4
    ---
 => 1,2,3,8,6,5,7,4
    -----
 => 1,2,3,8,6,5,7,4
    -------
 => 1,2,3,6,8,5,7,4
    ---------
 => 1,2,3,5,6,8,7,4
    -----------
 => 1,2,3,5,6,7,8,4
    -------------
 => 1,2,3,4,5,6,7,8
    ---------------

 TIME COMPLEXITY =>

 BEST = O(n)
 AVG = O(n^2)
 WORST = o(n^2)

 SPACE COMPLEXITY =>

 O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &vect)
{
    int n = vect.size();
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (vect[j - 1] > vect[j])
            {
                swap(vect[j - 1], vect[j]);
            }
        }
    }
}

int main()
{
    vector<int> vect = {2, 1, 3, 8, 6, 5, 7, 4};
    insertionSort(vect);
    for (auto x : vect)
    {
        cout << x << " ";
    }
    return 0;
}