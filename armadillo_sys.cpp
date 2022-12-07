/* Compile as follows:
   c++ armadillo_sys.cpp -o armadillo_sys -I ~/armadillo-11.4.2/include -llapack -lblas
*/

#include <iostream>
#include <armadillo>

using namespace arma;

int main()
{
    mat A = mat("1 0 5; 2 1 6; 3 4 0");
    mat b = mat("-1; 0; 1");
    mat x;

    x = solve(A,b);

    std::cout << x << std::endl;

    return 0;
}