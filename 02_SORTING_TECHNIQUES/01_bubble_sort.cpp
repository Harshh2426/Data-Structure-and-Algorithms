/*

 har iteration main sabse bada element last main pauch jata hai

 TIME COMPLEXITY =>

 BEST = O(n)
 AVG = O(n^2)
 WORST = o(n^2)

 SPACE COMPLEXITY =>

 O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&vect){
    int n=vect.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(vect[j]>vect[j+1])swap(vect[j],vect[j+1]);
        }
    }
}

int main()
{
    vector<int>vect={2,1,3,8,6,5,7,4};
    bubbleSort(vect);
    for(auto x:vect){
        cout<<x<<" ";
    }
    return 0;
}