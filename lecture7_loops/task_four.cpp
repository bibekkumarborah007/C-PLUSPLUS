//break keyword
//wap that keeps serving tea untill the user says they've had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'

#include <iostream>
using namespace std;
int main(){
    string response;

    while (true)
    {
        cout << "Do you want more tea (types 'stop' to exit)?: ";
        getline(cin, response);

        if (response == "stop")
        {
            //exit the loop
            break;
        }

        cout << "Here is another cup of tea \n";
    }

    cout << "No more tea will be served to you.";
    
    return 0;
}