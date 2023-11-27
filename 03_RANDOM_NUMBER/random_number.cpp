/*
  ! THIS CODE GENERATE A RANDOM NUMBER BETWEEN [0, 32767). BUT THIS IS NOT GOING TO CHANGE THE NUMBER AGAIN AND AGAIN.
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     for (int i = 0; i < 5; i++)
//     {

//         cout << rand() << endl;
//     }
//     // THE REPETITION IS SHOWN WHEN U AGAIN GOING TO EXECUTE IT
//     return 0;
// }

/*
  ! FOR GENERATING A RANDOM NUMBER DIFFERENT EACH TIME WE HAVE TO USE SRAND
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     srand(time(0));
//     for (int i = 0; i < 5; i++)
//     {
//         cout << rand() << endl;
//     }
//     return 0;
// }

/*
  ! FOR GENERATING A RANDOM NUMBER BETWEEN A RANGE OF [MIN,MAX]
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min = 6, max = 8;

    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        cout << (rand() % (max - min + 1)) + min << endl;
    }
    // THE REPETITION IS SHOWN WHEN U AGAIN GOING TO EXECUTE IT
    return 0;
}