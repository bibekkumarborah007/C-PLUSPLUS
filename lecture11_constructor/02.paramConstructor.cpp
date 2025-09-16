#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

    // parameterised constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        serving = serve;
        ingredients = ingr;
        cout << "Param constructor called" << endl;
    };

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << serving << endl;
        cout << "Ingredients: ";
        for (string i : ingredients)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai lemonTree("Lemon Tea", 2, {"Water", "Lemon", "Honey"});
    lemonTree.displayChaiDetails();
    return 0;
}

// ref of OOP myClass file