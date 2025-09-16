// check challenges
// 1.while loop: wap that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run untill all cups are served

#include <iostream>
using namespace std;
int main()
{
    int teaCups;

    cout << "Enter no. of tea cups to serve: ";
    cin >> teaCups;

    while (teaCups > 0)
    {
        cout << "Serving a cup of tea: \n"
             << teaCups << " remaining" << endl;
        teaCups--;
    }

    cout << "All tea cups are served. " << endl;
    return 0;
}