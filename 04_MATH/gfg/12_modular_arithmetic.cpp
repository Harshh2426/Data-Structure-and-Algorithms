/*

  * The value of modulo is basically considered 1e9+7.

  & it is used to avoid overflow errors in int datatype.

  ! MODULAR ADDITION
    (a + b) % mod = ((a % mod) + (b % mod)) % mod;

  ! MODULAR SUBTRACTION
    (a - b) % mod = ((a % mod) - (b % mod) + mod) % mod;

  ! MODULAR MULTIPLICATION
    (a * b) % mod = ((a % mod) * (b % mod)) % mod;

  ! MODULAR DIVISION
    (a / b) % mod = ((a % mod) * (b^-1 % mod)) % mod; => here b basically refers their inverse.

  ! MODULAR MULTIPLICATIVE INVERSE
    used for finding the inverse of b.
    the inverse of b exists if and only if gcd(b , mod) == 1.
    or (a . b) % mod == 1


    for this we need to know about extendedEuclid

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
 * IT WORKS FOR ALL THE CASES WHEATHER M IS PRIME OR NOT
 */

int x, y, d;

void extendedEuclid(int a, int b)
{
    if (b == 0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else
    {
        extendedEuclid(b, a % b);
        int temp = y;
        y = x;
        x = temp - (a / b) * y;
    }
}

int modularMultiplicativeInverse(int a, int m)
{
    extendedEuclid(a, m);
    return ((x % m) + m) % m;
}

/*
 * IF M IS PRIME
 */

// int binaryExp(int a,int b,int m){
//     int ans=1;
//     while(b){
//         if(b&1){
//             ans=(ans*a)%m;
//         }
//         a=(a*a)%m;
//         b=b>>1;
//     }
//     return ans;
// }

// int modularMultiplicativeInverse(int a,int m){
//     return binaryExp(a,m-2,m);
// }

int main()
{
    int a = 3, b = 8, m = 7;
    // we need to find ( a / b ) % c
    // for this we need to find inverse of b
    // then we have to multiply (a * inverse of b) % mod;
    int inv = modularMultiplicativeInverse(b, m);
    int ans = (a * inv) % m;
    cout << ans << endl;

    return 0;
}

/******************************************** QUESTIONS ***********************************************/

/*
  * HACKEREARTH PROBLEM
   & INPUT
     A,B,C,M

   & OUTPUT
     ((A^B)/C)%M


*/

// #include <bits/stdc++.h>
// using namespace std;

// ll binex(ll x, ll n, ll M)
// {
//     ll result = 1;
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//             result = (result * x) % M;
//         x = (x * x) % M;
//         n = n / 2;
//     }
//     return result;
// }

// ll d, x, y;
// void extendedEuclid(ll A, ll B)
// {
//     if (B == 0)
//     {
//         d = A;
//         x = 1;
//         y = 0;
//     }
//     else
//     {
//         extendedEuclid(B, A % B);
//         ll temp = x;
//         x = y;
//         y = temp - (A / B) * y;
//     }
// }

// ll modInverse(ll A, ll M)
// {
//     extendedEuclid(A, M);
//     return (x % M + M) % M;
// }

// int main()
// {
//     ll A, B, C, M;
//     cin >> A >> B >> C >> M;

//     ll temp = binex(A, B, M);
//     ll in = modInverse(C, M);
//     ll ans = (temp * in) % M;
//     cout << ans;
// }

/*
 * GFG PROBLEM

 ^ LINK : https://practice.geeksforgeeks.org/problems/ncr1019/1

 & INPUT
   n r

 & OUTPUT
   ( n! / ( r! * (n-r)!) ) % mod
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int binaryExp(int a, int b, int m)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * 1ll * a) % m;
        }
        a = (a * 1ll * a) % m;
        b = (b >> 1);
    }
    return ans;
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;
    ll fact[n + 1];
    ll ifact[n + 1];
    fact[0] = ifact[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        fact[i] = (i * fact[i - 1]) % mod;
        ifact[i] = binaryExp(fact[i], mod - 2, mod);
    }
    return (((fact[n] * ifact[r]) % mod) * ifact[n - r]) % mod;
    ;
}

int main()
{
    int n=5,r=3;
    cout<<nCr(n,r)<<endl;
    return 0;
}