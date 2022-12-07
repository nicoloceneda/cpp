/* Compile as follows:
   c++ armadillo_mat.cpp -o armadillo_mat -I ~/armadillo-11.4.2/include -llapack -lblas
*/

#include <iostream>
#include <armadillo>

using namespace arma;                                                           // Armadillo name space to use Armadillio functions

int main(){

    mat A = randu<mat>(4, 5);
    mat B = randu<mat>(4, 5);

    std::cout << A * B.t() << std::endl;

    return 0;
}