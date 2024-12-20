#include<iostream>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,1,1,2,3,3,3,4,5,5,5,5,5,5,6};
    int n = nums.size();

    int write_index = 3;

    for(int i=2;i<n;i++){
        if(nums[i] != nums[write_index - 3]){
            nums[write_index] = nums[i];
            write_index++;
        }
    }

    for(int i=0;i<write_index;i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}