#include <iostream>

int main(){

    // && = check if two conditions are true
    // || = chek if at least one of two conditions is true
    // ! = reverse the logical state of its operand

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperture is Good! ";
    }
    else{
        std::cout << "The temperture is bad! ";
    }
}