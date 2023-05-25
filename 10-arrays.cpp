#include <iostream>

using namespace std;

int main()
{

    int numbers1[] = {1, 2, 3, 4, 5};                                                               // Container to store multiple elements

    cout << numbers1[0] << endl;

    int numbers2[6] = {1, 2, 3, 4, 5};                                                              // Specify the number of elements
    numbers2[5] = 6;
    cout << numbers2[5] << endl;

    return 0;
}