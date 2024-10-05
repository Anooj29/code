#include <iostream>
int main(){
    int n;
    
    std::cout<<"Enter the number: ";
    std::cin>>n;

    if(n % 2 == 0)
        std::cout<<"It is Even number.";
    else
        std::cout<<"It is odd number";
    
    return 0;
}
