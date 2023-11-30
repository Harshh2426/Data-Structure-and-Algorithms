/*

 ! LINK : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

 * Input: prices = [7,1,5,3,6,4]
 * Output: 5

*/

#include <bits/stdc++.h>
using namespace std;

// int bestTimeToSellAndBuyStock(vector<int> &vect)
// {
//     int n = vect.size();
//     int profit=0;
//     for(int i=0;i<n;i++){
//         int ans=0;
//         for(int j=i+1;j<n;j++){
//             ans=max(ans,vect[j]-vect[i]);
//         }
//         profit=max(profit,ans);
//     }
//     return profit;
// }
/*

 * TC : O(n^2)
 * SC : O(1)

*/



int bestTimeToSellAndBuyStock(vector<int> &vect)
{
    int n = vect.size();
    int profit=0,mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,vect[i]);
        profit=max(profit,vect[i]-mini);
    }
    return profit;
}
/*

 * TC : O(n)
 * SC : O(1)

*/

int main()
{
    vector<int> vect = {7, 1, 5, 3, 6, 4};
    int ans = bestTimeToSellAndBuyStock(vect);
    cout << ans << endl;
    return 0;
}