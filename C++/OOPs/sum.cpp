#include <iostream>
#include <vector>
using namespace std;

class Solution{
public: 
    vector<int> twoSum(vector<int>& nums, int target){
        for(int i = 0; i < nums.size(); i++){
            for(int j =0; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(){
    Solution sol; 
    vector<int> nums;
    int n, target; 

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements: ";

    for(int i = 0; i < n; i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }

    cout<<"Enter the target value: ";
    cin>>target;

    vector<int> result = sol.twoSum(nums, target);

    if(!result.empty()){
        cout<<"Indices of the two sum numbers are: "<< result[0]<< " and " <<result[1];
    }
    else {
        cout<<"No solution found ";
    }

    return 0;

}
