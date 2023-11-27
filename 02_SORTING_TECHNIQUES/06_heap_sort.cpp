/*

 Heap sort is a comparison-based sorting technique based on Binary Heap data structure.
 A Binary heap is a heap, i.e, a tree which obeys the property that the root of any tree is greater than or equal to (or smaller than or equal to) all its children 

 & TIME COMPLEXITY =>

   BEST = O(nlogn)
   AVG = O(nlogn)
   WORST = o(nlogn)

 & SPACE COMPLEXITY =>

   O(1) 
    

 ! AGAR MAXHEAP BANA RAHE HAI TO RESULTANT ARRAY ASCENDING ORDER MAIN AAYEGA

 ! AGAR MINHEAP BANA RAHE HAI TO RESULTANT ARRAY DESCENDING ORDER MAIN AAYEGA

 ^ STEPS FOR HEAP SORT
 ^ 1. Build a heap from the given input array.
 ^ 2. Repeat the following steps until the heap contains only one element:
 ^ 3. Swap the root element of the heap (which is the largest element) with the last element of the heap.
 ^ 4. Remove the last element of the heap (which is now in the correct position).
 ^ 5. Heapify the remaining elements of the heap.
 ^ 6. The sorted array is obtained by reversing the order of the elements in the input array.

*/

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>&vect,int ind,int n){
    int largest=ind;
    int left=2*ind+1;
    int right=2*ind+2;
    if(left<n and vect[left]>vect[largest])largest=left;  // * FOR MINHEAP =>  vect[left]<vect[largest]
    if(right<n and vect[right]>vect[largest])largest=right; // * FOR MINHEAP =>  vect[right]<vect[largest]
    if(largest!=ind){
        swap(vect[largest],vect[ind]);
        heapify(vect,largest,n);
    }
}

void buildHeap(vector<int>&vect){
    int n=vect.size();
    for(int i=(n/2)-1;i>=0;i--){
        heapify(vect,i,n);
    }
}

void heapSort(vector<int>&vect){
    int n=vect.size();
    buildHeap(vect);
    for(int i=n-1;i>0;i--){
        swap(vect[0],vect[i]);
        heapify(vect,0,i);
    }
}

int main()
{
    vector<int> vect = {2, 1, 3, 8, 6, 5, 7, 4};
    int n = vect.size();
    heapSort(vect);
    for (auto x : vect)
    {
        cout << x << " ";
    }
    return 0;
}