// lamda functions: [](){}; sometimes in frameworks and libraries the functionality written is not used again and again so it is written only once with out function name to avoid repitative declaration and calling which is inefficient and also to avoid repitative memory clean
// found in frameworks and libraries

// auto can hold the function

#include <iostream>
using namespace std;

int main()
{

    // lamda: [] starts, standalone enitity so need to be exited with ; after {}
    auto preparedChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(4);

    return 0;
}