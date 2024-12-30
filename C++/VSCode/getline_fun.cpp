#include <iostream>

int main(){

    // In type a string that has spaces then it stop reading. Like your full name, it will just read your first name.
    // TO deal with this we have a function called getline()

    std::string name;
    int age;

    std::cout << "what is your age? ";
    std::cin >> age;

    std::cout << "Enter your full name: ";
    std::getline(std:: cin >> std::ws, name); //ws = wide space

    std::cout << "Hello! " << name << "\n";
    std::cout << "Your age is " << age;

    return 0;
}