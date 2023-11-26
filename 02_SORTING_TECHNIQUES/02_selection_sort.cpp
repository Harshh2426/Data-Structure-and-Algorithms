/*

 har iteration main sabse chota element start main pauch jata hai

 TIME COMPLEXITY =>

 BEST = O(n^2)
 AVG = O(n^2)
 WORST = o(n^2)

 SPACE COMPLEXITY =>

 O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&vect){
    int n=vect.size();
    for(int i=0;i<n;i++){
        int ind=i;
        for(int j=i+1;j<n;j++){
            if(vect[ind]>vect[j]){
                ind=j;
            }
        }
        swap(vect[ind],vect[i]);
    }
}

int main()
{
    vector<int>vect={2,1,3,8,6,5,7,4};
    selectionSort(vect);
    for(auto x:vect){
        cout<<x<<" ";
    }
    return 0;
}