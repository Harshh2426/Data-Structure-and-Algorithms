/*

 Counting Sort is a non-comparison-based sorting algorithm that works well when there is limited range of input values.
 

 & TIME COMPLEXITY =>

   BEST = O(n+k)
   AVG = O(n+k)
   WORST = o(n+k)

   n is the size of given array and k is the size count array

 & SPACE COMPLEXITY =>

   O(k) 
    

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int>&vect){
    int n=vect.size();
    int maxElement=0;
    for(auto x:vect)maxElement=max(maxElement,x);
    vector<int>count(maxElement+1,0);
    for(auto x:vect)count[x]++;
    for(int i=1;i<=maxElement;i++){
        count[i]=count[i]+count[i-1];
    }
    vector<int>ans(n,0);
    for(int i=n-1;i>=0;i--){
        ans[count[vect[i]]-1]=vect[i];
        count[vect[i]]--;
    }
    return ans;
}

int main()
{
    vector<int> vect = {2, 1, 2, 2, 6, 5, 5, 4};
    int n = vect.size();
    vector<int>ans=countSort(vect);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}