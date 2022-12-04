#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;

    cout << "Enter a number" << endl;
    cin >> x;

    cout << "If x = " << x << " then:" << endl;
    cout << " x^2 = " << pow(x,2) << endl;
    cout << " sqrt(x) = " << sqrt(x) << endl;
    cout << " sin(x) = " << sin(x) << endl;

    cout << "Enter another number" << endl;
    cin >> y;

    cout << "If y = " << y << " then:" << endl;
    cout << " x/y = " << x / y << endl;

    return 0;
}
