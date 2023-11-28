/*

! INPUT
1234

!OUTPUT
false

! INPUT
12321

!OUTPUT
true

*/



#include <bits/stdc++.h>
using namespace std;

bool palindromeNumber1(int n){
    int newNumber=0,originalNumber=n;
    while(n){
        newNumber=newNumber*10+(n%10);
        n=n/10;
    }
    return newNumber==originalNumber;
}
/*
  * TIME COMPLEXITY
   O(d) where d is the number of digits
*/

bool palindromeNumber2(int n){
    string str=to_string(n);
    string originalString=str,newString=str;
    reverse(newString.begin(),newString.end());
    return originalString==newString;
}
/*
  * TIME COMPLEXITY
   O(d) where d is the number of digits
*/


int main()
{
    int n=1232;
    if(palindromeNumber1(n)){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not a Palindrome Number"<<endl;
    }
    if(palindromeNumber2(n)){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not a Palindrome Number"<<endl;
    }
    
    return 0;
}