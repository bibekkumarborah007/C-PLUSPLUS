#include <iostream>
#include <vector> //an array with fast random access to any element

using namespace std;

class Chai
{ // class name always Capital letter
public:
    // data memebers (attributes/varibales)
    string teaName;             // name of the tea
    int servings;               // Numbers of serving
    vector<string> ingrediants; // list of ingrediants of the tea

    // Members function: fnc defined inside class is called data member
    void displayChaiDedtails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingrediants: ";
        for (string i : ingrediants) // "dataype i : arrayName" specialised loop for array
        {
            cout << i << " "; // i iterates to vector and prints along with a " " space
        }
        cout << endl;
    }
};

int main()
{
    Chai chaiOne; // create object

    chaiOne.teaName = "lemon tea"; // access to object properties btw dafault access modifier is private
    chaiOne.servings = 2;
    chaiOne.ingrediants = {"Water", "lemon", "Honey", "tea"};

    chaiOne.displayChaiDedtails();

    // another object creation
    Chai chaiTwo;
    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 4;
    chaiTwo.ingrediants = {"Water", "Milk", "Tea", "Ginger", "Masala"};

    chaiTwo.displayChaiDedtails();
    return 0;
}