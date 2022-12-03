#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  double height_meters;

  double height_feet;
  double height_inches;

  int height_inches_int;
  int height_feet_inches_feet;
  int height_feet_inches_inches;

  cout << "What is your name?" << endl;
  cin >> name;
  cout << "What is your height?" << endl;
  cin >> height_meters;

  height_feet = height_meters * 3.28084;
  height_inches = height_feet * 12;

  height_inches_int = height_inches;                                            // Double to int as height_inches_int declared as int
  height_feet_inches_feet = height_inches_int / 12;                             // Int divided by int gives int
  height_feet_inches_inches = height_inches_int % 12;                           // Gives the remainder

  cout << "The height of " << name << " is: " << endl;
  cout << height_meters << " m" << endl;
  cout << height_feet_inches_feet << " ft " << height_feet_inches_inches << " inches" << endl;

  return 0;
}
