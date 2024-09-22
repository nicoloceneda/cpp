// Read a csv file

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream ip("data.csv");                                                                        // Read-in the input file

    if(!ip.is_open()) cout << "Error: File Open" << "\n";                                           // Check if the file exists

    string firstName;
    string lastName;
    string age;

    while(ip.good()){                                                                               // Read until all data is processed

        getline(ip, firstName, ',');
        getline(ip, lastName, ',');
        getline(ip, age, '\n');

        cout << "Name: " << firstName << " " << lastName << "\n";
        cout << "Age: " << age << "\n";

    }
    ip.close();                                                                                     // Close the file

    return 0;
}