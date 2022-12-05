#include <iostream>
#include <string>

int main()
{
    int age;
    std::string name;

    std::cout << "Wat is your age?" << std::endl;
    std::cin >> age;

    if(age > 18){

        std::cout << "Have a pint" << std::endl;

    } else if(age == 18){

        std::cout << "Show me your ID" << std::endl;
        std::cout << "Have a pint" << std::endl;
        
    } else{

        std::cout << "I'm calling the police" << std::endl;
    }

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;

    if(name != "Nicolo"){

        std::cout << "It's 5 pounds please." << std::endl;

    }

    std::cout << "Goodbye" << std::endl;

    return 0;
}
