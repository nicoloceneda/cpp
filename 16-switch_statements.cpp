#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum);

int main()
{   
    cout << "Enter a day of the week in numbers (0-6)" << endl;
    int dayNum;
    cin >> dayNum;
    cout << getDayOfWeek(dayNum) << endl;

    return 0;
}

string getDayOfWeek(int dayNum)
{
    string dayName;

    switch(dayNum){                                                                                 // Could use several (else) if statements

        case 0:
            dayName = "Sunday";
            break;                                                                                  // Needed to exit switch statement when case is true

        case 1:
            dayName = "Monday";
            break;

        case 2:
            dayName = "Tuesday";
            break;

        case 3:
            dayName = "Wednesday";
            break;                                                                                  

        case 4:
            dayName = "Thursday";
            break;

        case 5:
            dayName = "Friday";
            break;

        case 6:
            dayName = "Saturday";
            break;

        default:                                                                                    // Gets executed if none of the cases are true
            dayName = "Invalid dayNum";
    }

    return dayName;
}