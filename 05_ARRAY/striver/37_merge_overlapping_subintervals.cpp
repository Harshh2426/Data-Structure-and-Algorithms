/*

 * Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
 * Output: [[1,6],[8,10],[15,18]]

*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlapping(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);
    int ind = 0, n = intervals.size();
    for (int i = 1; i < n; i++)
    {
        if (ans[ind][1] < intervals[i][0])
        {
            ans.push_back(intervals[i]);
            ind++;
        }
        else
        {
            ans[ind][1] = max(ans[ind][1], intervals[i][1]);
        }
    }
    return ans;
}

/*

 * TC : O(nlogn)
 * SC : O(1)

*/

int main()
{
    vector<vector<int>> vect = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = mergeOverlapping(vect);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}