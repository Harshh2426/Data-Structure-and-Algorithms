/*

! INPUT
12

!OUTPUT
1, 2, 3, 4, 6,12

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> factors1(int n)
{
    vector<int> vect;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            vect.push_back(i);
        }
    }
    return vect;
}
/*
 * TIME COMPLEXITY:
  O(n)
*/

vector<int> factors2(int n)
{
    vector<int> vect;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            vect.push_back(i);
            if (n / i != i)
            {

                vect.push_back(n / i);
            }
        }
    }
    return vect;
}
/*
 * TIME COMPLEXITY:
  O(sqrt(n))
*/
vector<int> factors3(int n)
{
    vector<int>vect;
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            vect.push_back(i);
        }
    }
    --i;
    if(n/i==i){
        vect.push_back(i);
    }
    for(;i>0;i--){
        if(n%i==0){
            vect.push_back(n/i);
        }
    }
    return vect;
}
/*
 * TIME COMPLEXITY:
  O(sqrt(n))
*/

int main()
{
    int n = 20;
    vector<int> ans1 = factors1(n);
    vector<int> ans2 = factors2(n);
    vector<int> ans3 = factors3(n);
    for (auto x : ans1)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : ans2)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : ans3)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}