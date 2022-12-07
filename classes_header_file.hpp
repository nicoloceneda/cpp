class Rectangle {

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