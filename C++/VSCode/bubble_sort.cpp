#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int> & arr){
    int n = arr.size();
    bool swapped;

    for(int i = 0 ; i < n - 1 ; i++){
        swapped = false;

        for(int j = 0 ; j < n - 1 - i ; j++){
            if(arr[j]<arr[j+1]){
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
    for (int num : arr){
        cout<<" "<<num;
    }
}

int main(){
    vector<int> arr = {35, 3, 54, 23, 654, 64, 23, 1, 38};
    BubbleSort(arr);
    cout<<"sorted array \n";
    privatevector(arr);
    return 0;
}
