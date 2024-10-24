#include<iostream>
int main(){
    int n; 

    std::cout<<"Enter number of elements of the array: "<<std::endl;
    std::cin>>n;

    int array[n];

    std::cout<<"Enter Elements: "<<std::endl;

    for (int i = 0 ; i < n ; i++){
        std::cin>>array[i];
    }

    std::cout<<"The entered elements are: "<<std::endl;

    for (int i = 0 ; i < n ; i++){
        std::cout<<array[i]<<"\n";
    }

    int max = INT_MAX;
    int min = INT_MIN;

    for (int i = 0 ; i < n ; i++){
        if (array[i] < max){
            max = array[i];
        }

        if (array[i] > min){
            min = array[i];
        }
    }

    std::cout<<"Int_max "<<INT_MAX<<std::endl;
    std::cout<<"Int_Min "<<INT_MIN<<std::endl;
    std::cout<<"Max "<<min<<std::endl;
    std::cout<<"Min "<<max<<std::endl;
}