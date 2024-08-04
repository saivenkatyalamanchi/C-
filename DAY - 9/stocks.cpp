#include<iostream>
using namespace std;

void maxProfit(int *arr, int n){
        int profit = 0;
        int mini = INT_MAX;
        int diff = 0;

        for(int i = 0; i < n; i++){
                
                diff = arr[i]  - mini;
                if(diff > profit){
                        profit = diff;
                }
                mini = min(mini, arr[i]);
        }

        cout << profit << endl;
}

int main(){
        int arr[6] = {7, 1, 5, 3, 6, 4};
        int n = 6;
        maxProfit(arr, n);
        
        return 0;
}