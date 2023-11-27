/*

  Divide and conquer algorithm to sort an array

 & TIME COMPLEXITY =>

  BEST = O(nlogn)
  AVG = O(nlogn)
  WORST = o(n^2)

 & SPACE COMPLEXITY =>

  O(1)

 ! WHEN IS THE WORST CASE COMPLEXITY HAPPENS

  The answer depends on the strategy for choosing pivot. In early versions of Quick Sort where the leftmost (or rightmost) element is chosen as a pivot, the worst occurs in the following cases.
  1) Array is already sorted in the same order.
  2) Array is already sorted in reverse order.
  3) All elements are the same (a special case of cases 1 and 2)
  Since these cases are very common to use cases, the problem was easily solved by choosing either a random index for the pivot, choosing the middle index of the partition, or (especially for longer partitions) choosing the median of the first, middle and last element of the partition for the pivot. With these modifications, the worst case of Quicksort has fewer chances to occur, but a worst case can still occur if the input array is such that the maximum (or minimum) element is always chosen as the pivot.

*/

// #include <bits/stdc++.h>
// using namespace std;

// int partition(vector<int> &arr, int low, int high)
// {
//     int pivot = high, ind = low;
//     for (int i = low; i < high; i++)
//     {
//         if (arr[i] <= arr[pivot])
//         {
//             swap(arr[i], arr[ind++]);
//         }
//     }
//     swap(arr[pivot], arr[ind]);
//     return ind;
// }

// void quickSort(vector<int> &vect, int low, int high)
// {
//     if (low < high)
//     {
//         int mid = partition(vect, low, high);
//         quickSort(vect, low, mid - 1);
//         quickSort(vect, mid + 1, high);
//     }
// }

// int main()
// {
//     vector<int> vect = {2, 1, 3, 8, 6, 5, 7, 4};
//     int n = vect.size();
//     quickSort(vect, 0, n - 1);
//     for (auto x : vect)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

/**************************************** RANDOMISED QUICK SORT ***************************************************************/

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int ele = high, ind = low;
    for (int i = low; i < high; i++)
    {
        if (arr[i] <= arr[ele])
        {
            swap(arr[i], arr[ind++]);
        }
    }
    swap(arr[ele], arr[ind]);
    return ind;
}

int randomQuick(vector<int> &vect, int low, int high)
{
    srand(time(0));
    int random=(rand()%(high-low+1))+low;
    swap(vect[random],vect[high]);
    return partition(vect,low,high);
}

void quickSort(vector<int> &vect, int low, int high)
{
    if (low < high)
    {
        int mid = randomQuick(vect, low, high);
        quickSort(vect, low, mid - 1);
        quickSort(vect, mid + 1, high);
    }
}

int main()
{
    vector<int> vect = {2, 1, 3, 8, 6, 5, 7, 4};
    int n = vect.size();
    quickSort(vect, 0, n - 1);
    for (auto x : vect)
    {
        cout << x << " ";
    }
    return 0;
}