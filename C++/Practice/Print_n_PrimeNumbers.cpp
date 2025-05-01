#include <iostream>
using namespace std;

class PrimeNumber {
private:
    int n;

public:
    PrimeNumber(int size) {
        n = size;
    }

    void PrintPrime() {
        if (n <= 1) {
            cout << "No prime numbers up to " << n << "." << endl;
            return;
        }

        cout << "Prime numbers up to " << n << ": ";
        for (int num = 2; num <= n; num++) {
            bool isPrime = true;
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                cout << num << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    PrimeNumber obj(n);
    obj.PrintPrime();

    return 0;
}