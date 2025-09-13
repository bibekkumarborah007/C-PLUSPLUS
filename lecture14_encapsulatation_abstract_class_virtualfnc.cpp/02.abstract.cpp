#include<iostream>
#include<string>
using namespace std;

class Tea{
    public:
       virtual void prepareIngrediants() = 0; //pure virtual function syntax: a absatract classinside no details but moti moti baat likhi hai no implmentation but boiler plate
       virtual void brew() = 0;
       virtual void serve() = 0;

       void makeTea(){ //mobile dev
            prepareIngrediants();
            brew();
            serve();
       }
};

//derived class

class GreenTea : public Tea{
    public:
        void prepareIngrediants() override {
            cout << "Green leaves annd water is ready";
        }
        void brew() override {
            cout << "Green Tea brew";
        }
        void serve() override {
            cout << "Green Tea Served";
        }
};
class MasalaTea : public Tea{
    public:
        void prepareIngrediants() override {
            cout << "Masala leaves annd water is ready";
        }
        void brew() override {
            cout << "Masala Tea brew";
        }
        void serve() override {
            cout << "Masala Tea Served";
        }
};
int main(){
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();//abstraction of makeTea used in IOS camera code
    masalaTea.makeTea();
    return 0;
}