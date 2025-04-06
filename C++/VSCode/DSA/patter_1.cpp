#include <iostream> 
using namespace std;

int main(){
    int n;
    cout << "Enter value: ";

    int row = 1;
    while(row <= n){
        int col = n; 
        while(col >= 1){
            cout << col;
            col = col - 1;
        }
        cout << endl;
        row = row - 1;
    }
    return 0; 
}