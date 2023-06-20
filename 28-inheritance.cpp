#include <iostream>

using namespace std;

class Chef                                                                                          // Superclass
{
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecial() {
            cout << "The chef makes bbq" << endl;
        }
};

class ItalianChef : public Chef                                                                     // Subclass
{
    public:
        void makePasta() {                                                                          // New function
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecial() {                                                                        // Overiding a function
            cout << "The chef makes pizza" << endl;
        }
};

int main()                                                                                          
{
    Chef chef;
    chef.makeChicken(); 
    chef.makeSpecial();                                                                

    ItalianChef italianChef;
    italianChef.makeChicken(); 
    italianChef.makePasta(); 
    italianChef.makeSpecial();  

    return 0;
}