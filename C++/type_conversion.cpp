#include <iostream>

int main(){
    // type conversuion = conversion s value of one data type to another 
    //          Implicit = automatic
    //          Explicit = Precrede value with new data type (int)

    int correct = 8;
    int question = 10;
    double score = correct/(double)question * 100;

    std::cout<<score<<"%";
    return 0;
}