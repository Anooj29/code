#include<iostream>

int main(){

    std::cout<<"**********CALCULATOR***********\n";

    char operation;
    double NUM1;
    double NUM2;
    double result;

    std::cout << "Enter Operation [+, -, *, /]: ";
    std::cin >> operation;

    std::cout << "Enter first number: ";
    std::cin >> NUM1;

    std::cout << "Enter second number: ";
    std::cin >> NUM2;

    switch (operation){
        case '+' :
            result = NUM1 + NUM2 ;
            std:: cout << "Sum is: " << result;
        break;

        case '*' :
            result = NUM1 * NUM2 ;
            std:: cout << "Product is: " << result;
        break;

        case '-' :
            result = NUM1 - NUM2 ;
            std:: cout << "Difference is: " << result;
        break;

        case '/' :
            result = NUM1 / NUM2 ;
            std:: cout << "Divide is: " << result;
        break;
    }

    return 0;

}