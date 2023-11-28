/*

! INPUT
12

!OUTPUT
2, 3, 5, 7, 11

*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 or n == 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> primeNumbers1(int n)
{
    vector<int> vect;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            vect.push_back(i);
        }
    }
    return vect;
}
/*
 * TIME COMPLEXITY:
  O(n*sqrt(n))
*/

vector<int> primeNumbers2(int n)
{
    /*
      ! this method is also known as SEIVE OF ERATOSTHENES
    */
    vector<int> vect(n + 1, 0);
    vect[0] = 1;
    vect[1] = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (vect[i] == 0)
        {
            for (int j = i * i; j <= n; j = j + i)
            {

                vect[j] = 1;
            }
        }
    }
    vector<int> ans;
    for (int i = 0; i < n + 1; i++)
    {
        if (vect[i] == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
/*
 * TIME COMPLEXITY :
  O(n*log(log(n)))

 * SPACE COMPLEXITY :
  o(n)

*/

int main()
{
    int n = 12;
    vector<int> ans1 = primeNumbers1(n);
    vector<int> ans2 = primeNumbers2(n);
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
    return 0;
}