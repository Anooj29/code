#include <iostream>
int main(){

    int n;
    std::cout<<"Enter number of elements: "<<std::endl;
    std::cin>>n;
    int array[n];

    std::cout<<"Enter elements: "<<std::endl;
    
    for (int i = 0 ; i < n ; i++){
        std::cin>>array[i];
    }

    std::cout<<"The reverse of array is: "<<std::endl;

    for (int i = n - 1 ; i >= 0 ; i--){
        std::cout<<array[i]<<"\n";
    }
}