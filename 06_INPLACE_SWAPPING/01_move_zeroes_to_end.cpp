/*

 * LINK : https://leetcode.com/problems/move-zeroes/

*/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>&vect){
    int n=vect.size();
    int i=0,j=0;
    while(j<n){
        if(vect[j]!=0){
            swap(vect[i++],vect[j]);
        }
        j++;
    }
}

int main()
{
    vector<int> vect = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    moveZeroes(vect);
    for (auto x : vect)
    {
        cout << x << " ";
    }
}