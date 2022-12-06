#include <iostream>

int main(){
      
    const int n = 10;                             
    int product[n][n];                                                          // to specify the size of an array using a variable we declare it as constant
 
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            product[i][j] = (i + 1) * (j + 1);

        }
    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

             std::cout << product[i][j] << "\t";                                // "t" is a tab character 
        }

        std::cout << std::endl;
    }

    return 0; 
}                                                                  