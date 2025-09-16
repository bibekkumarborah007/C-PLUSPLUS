#include <iostream>
#include <vector>
using namespace std;
// copy: constructor values coopy. Required when play with pointer and dynamic memory (heap)
class Chai
{
public:
    string *teaName; // string pointer
    int serving;
    vector<string> ingredients;

    // parameterised constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = new string(name); // if memory ref is taken this * pointer allocates the memory dynamically (heap)
        serving = serve;
        ingredients = ingr;
        cout << "Param constructor called" << endl;
    };

    // deep copy:conpy constructor const class(class& param)
    Chai(const Chai &other)
    {
        // copy may hae pointer string etc. must give all the reference of class & also called deep copy

        teaName = new string(*other.teaName);
        // since playing with pointer just like in constructor class and class pointer we have to use pointer and dymanically memory allocation.
        // other has access to Chai& all the data members access. But the other is not like other but workig with pointer so *other.teaName
        serving = other.serving;
        ingredients = other.ingredients;
        cout << "Copy constructor called" << endl;
    };

    // desctructor for constructor
    ~Chai()
    {
        // when we allocate variable into memory dynamically then we have to free the varible from dynamic memory too for constructor for that there must be a destructor
        delete teaName;
        cout << "Destructor called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << *teaName << endl; // without *: Tea Name: 0x10817f0 else memory ref
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
    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});
    // lemonTea.displayChaiDetails(); // first obj is done

    // copy the object using loop and all but not that simple due to variety of datatype
    Chai copiedChai = lemonTea; // Note: destructor is called after lemonTea is called and remove ref of lemonTea using desc but copiedChai ask for val and ref but destructor has freed the memory refrence of lemonTree. Once free copiedChai tries to get access to lemonTrea's memory reference or to free the already removed memory that is a problem and for this copyconstructor is introduced. Trying to access the already removed remory is a problem but the freed memory being tried being to get free is a big issue in c++.

    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modifed Lemon tea"; // pointer * because it is not a regular string

    cout << "---------------------- lemonTea -----------------------" << endl;
    lemonTea.displayChaiDetails();
    cout << "---------------------- copiedChai ---------------------" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}

// destructor is called twice for coppiedTea it knwos the contructor created, the dynimcally memory allocated in two place due to coppied value

// need of copy constructor when we can already declare and call the constructor?