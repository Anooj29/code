#include <iostream>
#include<vector>

using namespace std;

void bubblesort(vector<int> & arr){
    int n = arr.size();
    bool swapped;

    for(int i = 0 ; i < n - 1 ; i++){
        swapped = false;
        for(int j = 0 ; j < n - i - 1 ; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void privatevector(const vector<int> & arr){
    for(int num : arr){
        cout<<" "<<num;
    }
}

int main(){
    vector<int> arr = {64, 34, 25, 78, 39, 45};
    bubblesort(arr);
    cout<<"Sorted array: \n";
    privatevector(arr);
    return 0;
}
