// continue keyword
// wap that skips brwing green tea if the user dislike it. Use a continue statement to skip over green tea but brew other types of tea in a list

#include <iostream>
using namespace std;
int main()
{
    // string teaOne = "green tea";
    // string teaOne = "lemon tea";

    // use we list or array
    string teaTypes[5] = {"Oolong tea", "Orange tea", "Green tea", "Black tea", "Lemon tea"};

    for (int i = 0; i < 5; i++)
    {
        if (teaTypes[i] == "Green tea")
        {
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }

        cout << "Brewing " << teaTypes[i] << "..." << endl;
    }

    return 0;
}