#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}