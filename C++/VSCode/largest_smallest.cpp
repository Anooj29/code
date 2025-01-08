#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter number of elements wanna enter: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " number of elements: ";

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; 
    }

    int largest = arr[0], smallest = arr[0];
    for(int i = 0 ; i < n ; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
        if (arr[i] < smallest){
            arr[i] = smallest;
        }
    }
    cout << "largest" << largest << endl;
    cout << "smallest" << smallest << endl;
}