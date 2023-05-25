#include <iostream>

using namespace std;

int main()
{
    int numbers1[] = {1, 2, 3, 4, 5};                                                               // Elements provided directly (cannot add more elements)

    cout << numbers1[0] << endl;

    int numbers2[6] = {1, 2, 3, 4, 5};                                                              // Specify the number of elements (can add more elements)
    numbers2[5] = 6;
    cout << numbers2[5] << endl;

    return 0;
}