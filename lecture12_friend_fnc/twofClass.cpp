//a friend class can access private and protected members of other classes when declared as friend
//eg/ friend class class_name

//https://learn.microsoft.com/en-us/cpp/cpp/friend-cpp?view=msvc-170
//https://www.geeksforgeeks.org/cpp/friend-class-function-cpp/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
    public:
        Chai(string name, int serve): teaName(name), servings(serve){}//single line param const

    /*public:
        Chai(string name, int serve){
        teaName = name;
        servings = serve;
        }
        */

        friend bool compareServings(const Chai &chai1,const Chai &chai2);

       void display() const{
           cout << "teaname: " << teaName << endl;
        }
    };

    bool compareServings(const Chai &chai1, const Chai &chai2){
        return chai1.servings > chai2.servings;
    }

int main(){
    Chai masalaChai("masala chaui", 14);
    Chai gingerChai("giner chai", 8);

    masalaChai.display();
    gingerChai.display();

    if(compareServings(masalaChai, gingerChai)){
        cout << "Masala Chai is having MORE servings";
    }else{
        cout << "Masala Chai is having LESS servings";
    }
    return 0;
}