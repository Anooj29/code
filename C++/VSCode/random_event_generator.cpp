#include <iostream>

int main(){

    srand(time(0));

    int randNUM = rand() % 5 + 1;

    switch (randNUM)
    {
    case 1: std::cout << "You won motor controller! \n";
        break;

    case 2: std::cout << "You won RaspberryPi! \n";
        break;

    case 3: std::cout << "You won JetSon nano! \n";
        break;
    
    case 4: std::cout << "You won course! \n";
        break;

    case 5: std::cout << "You won LLM model! \n";
        break;
    }

    return 0;
}