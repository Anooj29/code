// // User input array
// #include <iostream>

// int main(){
//     int n;
//     std::cin>>n;

//     int array[n];

//     for(int i = 0 ; i < n ; i++){
//         std::cin>>array[i];
//     }
//     for(int i = 0 ; i < n ; i++){
//         std::cout<<array[i]<<" ";
//     }
//     return 0;
// }

// #include <iostream>

// int main(){
//     int n; 
//     std::cin>>n;

//     int array[n];

//     for(int i = 0 ; i < n ; i++){
//         std::cin>>array[i];
//     }

//     for(int i = 0 ; i < n ; i++){
//         std::cout<<array[i]<<" ";
//     }

//     int Max=0;
//     int Min=10000000;

//     for (int i = 0; i < n; i++){
//         if(array[i]>Max){
//             Max=array[i];
//         }
//         if(array[i]<Min){
//             Min=array[i];
//         }
//     }

//     std::cout<<"max is "<<Max;
//     std::cout<<"Min is "<<Min;

//     return 0;
// }

#include <iostream>
int main(){
    int n;
    std::cin>>n;

    int array[n];

    for(int i = 0 ; i < n ; i++){
        std::cin>>array[i];
    }

    for(int i = 0 ; i < n ; i++){
        std::cout<<array[i];
    }

    int max = 0;
    int min = 1000;

    for (int i = 0 ; i < n ; i++){

        if(max < i){
            max = array[i];
        }

        if(min > array[i]){
            min = array[i];
        }
    }

    std::cout<<"The max is "<<max<<std::endl; 
    std::cout<<"The min is "<<min<<std::endl; 

    return 0;

}