#include <iostream>
using namespace std;

class PrimeNumber{
private:
    int n;

public: 
    PrimeNumber(int size){
        n = size;
    }

    void Prime(){
        if (n <= 1){
            cout << "Not a prime number." << endl;
            return;
        }
        for(int i = 2 ; i < n  ; i++){
            if (n % i == 0){
                cout << "Not Prime." << endl;
                return;
            }
        }
        cout << "Prime Number";
    }
};

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;

    PrimeNumber ob(n);
    ob.Prime();

    return 0;

}