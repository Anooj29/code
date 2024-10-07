#include <iostream>

int main(){
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    for(int i = 0 ; i <= n ; i+=3){
        for(int j = 0 ; j <= i ; j+=2){
            std::cout << j;
        }
        std::cout << '\n';
    }
    return 0;
}