/*

 * GETLINE IS USED WHEN U WANT TO TAKE WHOLE LINE AS AN INPUT.

*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     // cin>>str; => this gives only one word as an output
//     getline(cin,str);
//     cout<<str;
//     return 0;
// }

/*

 * IT FIRST U WANT TO TAKE AN INTEGER AS AN INPUT AND THEN N STRING AS INPUT

*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         string str;
//         getline(cin, str);
//         cout << str << endl;
//         // THIS CODE GENERATES OUTPUT N-1 TIMES( YE ISLIYE HOTA HAI KYONKI JAB HUM N MAIN INPUT LETE HAI TO EK \N BHI AATA HAI GETLINE US \N KO INPUT LE LETA HAI ) FOR CORRECTING IT USE CIN IGNORE
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     while (n--)
//     {
//         string str;
//         getline(cin, str);
//         cout << str << endl;
//     }
// }

/*

 ^ FOR ADDING CHARACTER IN STRING AT THE LAST POSITION

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abc";
    s.push_back('d'); // => TC : O(1)
    s = s + "d";      // => TC : O(n) yaha par pehle s ki copy banti hai uske bad usme char add karta hai uske baad usme store karta hai
    cout << s << endl;
    return 0;
}