#include <iostream>
using namespace std;

class Pattern {
private:
    int n; // Number of rows/columns for the pattern

public:
    // Constructor to initialize the size of the pattern
    Pattern(int size) {
        n = size;
    }

    // Function to generate and display the pattern
    void generatePattern() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i < j) {
                    cout << "*";
                }
            }
            cout << i << endl; // Print the row number at the end of each row
        }
    }
};

int main() {
    int n;
    cout << "Enter value: ";
    cin >> n;

    // Create an object of the Pattern class and generate the pattern
    Pattern pattern(n);
    pattern.generatePattern();

    return 0;
}