#include <iostream>

class Rectangle{

    // Private attributes cannot be edited in the main file but only using setter

    private:

        double width;                                                      
        double height;                                                  

    public:

        double area(){                                                      // Nothing in the paranthesis because it does not take inputs
            
            return width*height;
            }

        double peremeter(){                                      

            return 2 * width + 2 * height;
            }

        // Declare a function within class but define it outside

        void set_dimensions(double, double);                                // Set to void because it does not return anaything, takes two doubled as inputs 
        
        // Declare and define a function within a class

        double get_width(){
            
            return width;
            } 
        
        double get_height(){
            
            return height;
            }
};

// Define the function outside the class to set the dimensions of the rectangle so that they can't be modified from outside the class 

void Rectangle::set_dimensions(double x, double y){

    width = x;
    height = y;
}

int main() {

    Rectangle Rec1;                                                         // Declare Rec1 of type Rectangle
    Rectangle Rec2;

    // Set attributes
    Rec1.set_dimensions(5.0, 6.0);
    Rec2.set_dimensions(10.0, 12.0);

    // Get attributes
    std::cout << "Width of Rec1: " << Rec1.get_width() << std::endl;
    std::cout << "Height of Rec1: " << Rec1.get_height() << std::endl;
    std::cout << "Width of Rec2: " << Rec2.get_width() << std::endl;
    std::cout << "Height of Rec2: " << Rec2.get_height() << std::endl;

    // Area
    std::cout << "Area of Rec1: " << Rec1.area() << std::endl;
    std::cout << "Area of Rec2: " << Rec2.area() << std::endl;

    // Peremeter
    std::cout << "Perimeter of Rec1: " << Rec1.peremeter() << std::endl;
    std::cout << "Perimeter of Rec2: " << Rec2.peremeter() << std::endl;

    return 0;
}