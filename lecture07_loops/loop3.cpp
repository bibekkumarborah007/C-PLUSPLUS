// 3. for loop: wap that prints the brewing instruction for making 5 cups of tea. The brewing process should be printed once for each cup using for loop

#include <iostream>
using namespace std;
int main()
{
    int teaCups = 5;

    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Brewing cup: " << i << " of tea..." << endl;
    }

    cout << "Outside of loop at 6";

    return 0;
}