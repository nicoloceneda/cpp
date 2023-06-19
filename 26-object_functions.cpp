#include <iostream>

using namespace std;                                                               

class Student 
{
    public:
        string name;                                                                                // Attributes
        string major;
        double gpa;

        Student () {                                                                                // Constructor, used to define default values for the attributes
            name = "No name";
            major = "No major";
            gpa = 0.0;
        }  
    
        Student (string aName, string aMajor, double aGpa) {                                        // Constructor, used to initialize the object's attributes
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }      

        bool hasHonors() {                                                                          // Class function    
            if (gpa > 3.5) {
                return true;
            }               
            return false;
        }                                                           
};

int main()
{
    Student student1("Jim", "Business", 2.4);                                                       // Object (instance of a class)
    Student student2("Pam", "Art", 3.6);                                                                                

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}