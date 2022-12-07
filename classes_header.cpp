#include <iostream>
#include "classes_header_file.hpp" 

int main(){

    Rectangle Rec1;                                                        
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