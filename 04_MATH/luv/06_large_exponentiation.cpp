/*

* HERE WE ARE GOING TO CHECK HOW THE BINARY EXPONENTIATION AFFECTS IF WE ARE GOING TO CHNAGE A, B AND M


*/

/*

^ FIRST CASE : WHEN WE ARE GOING TO INCREASE THE VALUE OF A

^ FOR INCREASING THE VALUE OF A OUT OF 1e9, WE HAVE TO PASS IT AS IN POWER A^(ANY NUMBER)

^ FOR DEALING IT WITH WE ARE SIMPLY GOING TO USE BINARYEXP(A,ANY NUMBER) WHICH MAKE IT INSIDE THE RANGE

^ (A ^ ANY NUMBER) % MOD = ((A % MOD) % ANY NUMBER) % MOD

*/

// #define ll long long
// int M = 1000000007;

// int binaryExp(int a, int b)
// {
//     ll ans = 1;
//     while (b)
//     {
//         if (b & 1)
//         {
//             ans = (ans * a) % M;
//         }
//         a = (a * a) % M;
//         b = b >> 1;
//     }
//     return ans;
// }

/*

^ SECOND CASE : WHEN WE ARE GOING TO INCREASE THE VALUE OF M

^ WHEN WE ARE GOING TO INCREASE THE VALUE OF M TO 1e18 THE MAIN PROBLEM IS INTEGER OVERFLOW

^ IF WE ARE USING ALL THE VARIABLES IN LONG LONG STILL IT GIVES INTEGER OVERFLOW BECUASE

^ (A*B)%M => (1e18 * 1e18) % 1e18 => HERE 1e18 * 1e18 GIVES OVERFLOW ERROR

^ FOR DEALING IT WITH WE ARE GOING TO USE BIANRY ADDITION

*/

// int binaryExp(int a, int b)
// {
//     ll ans = 1;
//     while (b)
//     {
//         if (b & 1)
//         {
//             ans = (ans + a) % M;
//         }
//         a = (a + a) % M;
//         b = b >> 1;
//     }
//     return ans;
// }

/*

^ THIRD CASE : WHEN WE ARE GOING TO INCREASE THE VALUE OF B

^ THE VALUE OF B IS INCREASED BY USING POWER(B , ANY NUMBER)

^ THE PROBLEM HERE IS

^ (A ^ (B ^ ANY NUMBER)) % MOD != ((A % MOD) ^ (B ^ ANY NUMBER) % MOD) % MOD

^ FOR DEALING WITH IT WE ARE GOING TO USE EULER TOTIENT FUNCTION

^ (A ^ (B ^ ANY NUMBER)) % MOD == ((A % MOD) ^ (B ^ ANY NUMBER) % EULER TOTIENT(MOD)) % MOD

^ ETF(N) = N*(1-1/D1)*(1-1/D2) FOR ALL UNIQUE PRIME FACTORS D

^ ETF(6) = 6*(1-1/2)*(1-1/3) = 6*(1/2)*(2/3) = 2

^ ETF(12) = 12*(1-1/2)*(1-1/3) = 12*(1/2)*(2/3) = 4

^ ETF(5) = 5*(1-1/5) = 5*(4/5) = 4

^ final note : b hume power ya array ke form me de sakta hai jo easily out of range chala jayega use range ke inside rakhne ke liye hum usse mod by ETF(MOD) se karenge

* FOR ALL CASES

^ GIVEN A, B, C, M

^ TO FIND : (A ^ (B ^ C)) % M

^ FIRST STEP : TO COMPUTE B ^ C USING :int ans = bianryExp(B, C, ETF(M));

^ THEN int res = binaryExp(A, ans, M)

* FOR PRIME M

^ GIVEN A, B, C, M

^ TO FIND : (A ^ (B ^ C)) % M

^ FIRST STEP : TO COMPUTE B ^ C USING :int ans = bianryExp(B, C, M-1);

^ THEN int res = binaryExp(A, ans, M)

*/

/******************************************* QUESTION *****************************************************/
/*

* LINK : https://leetcode.com/problems/super-pow/

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binaryExp(int a, int b, int m)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % m;
        }
        a = (a * 1ll * a) % m;
        b = b >> 1;
    }
    return ans;
}

int superPow(int a, vector<int> &b)
{
    int mod = 1140;
    int newB = 0;
    int d = b.size() - 1;
    for (int i = 0; i < b.size(); i++)
    {
        newB = b[i] * binaryExp(10, d--, mod) + newB;
    }
    return binaryExp(a, newB, 1337);
}

int main(){
    vector<int>vect={1,2,3,4};
    int ans=superPow(2,vect);
    cout<<ans<<endl;
}
