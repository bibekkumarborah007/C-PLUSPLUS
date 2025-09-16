#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

    // //default non parameterised constructor---------------------
    Chai()
    {
        // constructor is a speacial type of method/function with same name as class which is created even if you dont write it on the code it is written behind the code.
        // It is also called auto when an object is created without calling manually
        teaName = "Unknown Tea";
        serving = 1;
        ingredients = {"Water", "Tea Leaves"};
        cout << "Default constructor called" << endl;
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
    Chai defaultChai;
    defaultChai.displayChaiDetails();
    return 0;
}