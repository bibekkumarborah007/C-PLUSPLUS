// 4.Logical Operators
// Challenge: Create a program that checks if a user is eligible for a tea subcsription discount. The disocunt applies if the user is either student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup counts

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string userStatus;
//     int cups;

//     cout << "Are you a student (Yes or No): \n";
//     getline(cin, userStatus);

//     if (userStatus == "Yes"){
//         cout << "Eligible for discount";
//     }
//     else
//     {
//         cout << "How many of cups of tea purchased? \n";
//         cin >> cups;

//         if (cups >= 15)
//         {
//             cout << "Eligible for discount";
//         }
//         else{
//             cout << "Not Eligible for discount";
//         }
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     bool isStudent;
//     int cups;

//     cout << "Are you a student (Enter 1 for Yes, 0 for No): ";
//     cin >> isStudent;

//     // if(isStudent == 1 || cups > 15){
//         //     cout << "You are eligible for a discount \n" << endl;
//         // }else {
//             //     cout << "You are NOT eligible for a discount " << endl;
//             // }

//             if (isStudent == 1)
//             {
//                 cout << "You are eligible for a discount" << endl;
//             }
//             else if (isStudent == 0)
//             {
//                 cout << "How many cups of tea have you purchased? ";
//                 cin >> cups;
//                 if (cups > 15)
//                 {
//                     cout << "You are eligible for discount" << endl;
//                 }
//                 else
//                 {
//                     cout << "You are not eligible for discount" << endl;
//                 }

//             }
//         else
//             {
//                 cout << "Invalid input. Please enter 1 for YEs or 0 for No." << endl;
//             }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    bool isStudent;
    int cups;

    cout << "Are you a students (Enter 1 for yes, 0 for No): ";
    cin >> isStudent;
    cout << "How many cups: " << endl;
    cin >> cups;

    if (isStudent || cups > 15)
    {
        cout << "You are eligible for discount";
    }
    else
    {
        cout << "You're not eligible for discount";
    }
    return 0;
}

// bitwise opearation