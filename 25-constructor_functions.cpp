#include <iostream>

using namespace std;                                                               

class Book 
{
    public:
        string title;                                                                               // Attributes
        string author;
        int pages;

        Book () {                                                                                   // Constructor (function for a class), here used to define default values for the attributes
            title = "No title";
            author = "No author";
            pages = 0;
        }  
    
        Book (string aTitle, string aAuthor, int aPages) {                                          // Constructor (function for a class), here used to initialize the object's attributes
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }                                                                                     
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500);                                                  // Object (instance of a class)
    Book book2("Lord of the Rings", "Tolkein", 700);                 
    Book book3;                                                                

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << book3.pages << endl;

    return 0;
}