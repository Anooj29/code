#include<iostream>

int main(){
    
    int n;
    std::cout<<"Enter number of elements in array:"<<std::endl;
    std::cin>>n;

    int array[n];

    std::cout<<"Enter elements of array:"<<std::endl;

    for(int i = 0 ; i < n ; i++){
        std::cin>>array[i];
    }

    std::cout<<"The reverse array is: \n";

    for(int i = n - 1 ; i >= 0 ; i--){
        std::cout<<array[i]<<std::endl;
    }

}