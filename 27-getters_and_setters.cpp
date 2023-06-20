#include <iostream>

using namespace std;                                                               

// We can use setters and getters to control access to the individual attributes in an object

class Movie 
{
    // private means that only the code inside this class is able to access the code below private

    private:
        string rating;

    // public means that any code outside this class is able to access the code below public
    
    public:
        string title;                                                                               
        string director;

        // Constructor

        Movie () {                                                                                   
            title = "No title";
            director = "No director";
            rating = "No rating";
        }  
    
        Movie (string aTitle, string aDirector, string aRating) {                                         
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }                   

        // Setter

        void setRating (string aRating) {
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            } else {
                rating = "NR";
            }
        }      

        // Getter

        string getRating () {
            return rating;
        }                                                            
};

int main()
{
    Movie avengers("The avengers", "Joss Whedon", "PG-13");    
    cout << avengers.getRating() << endl;

    avengers.setRating("Dog");
    cout << avengers.getRating() << endl;

    return 0;
}

