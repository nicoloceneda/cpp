#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char op;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the operation" << endl;
    cin >> op;
    cout << "Enter the second number" << endl;
    cin >> num2;

    if (op == '+') {

        result = num1 + num2;

    } else if (op == '-') {

        result = num1 - num2;

    } else if (op == '*') {

        result = num1 * num2;

    } else if (op == '/') {

        result = num1 / num2;

    } else {

        cout << "Invalid operator" << endl;
    }

    cout << num1 << op << num2 << " = " << result << endl;

    return 0;
}