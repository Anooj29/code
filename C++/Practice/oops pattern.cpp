#include <iostream>
using namespace std;

class Pattern{
private: 
    int n;

public:
    Pattern(int size){
        n = size; 
    }

    void generatepattern(){
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if (i < j){
                    cout << "*";
                }
            }
            cout << i << endl;
        }
    }
};

int main(){
    int n;
    cout << "Enter value: ";
    cin >> n;

    Pattern patt(n);
    patt.generatepattern();

    return 0;
}