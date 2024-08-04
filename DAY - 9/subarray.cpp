#include<iostream>
using namespace std;

void printSubarray(int *arr, int n){
        int maxSum = INT_MIN;
        for(int start = 0; start < n; start++){
                int sum = 0;
                for(int end = start; end < n; end++){
                        sum += arr[end];
                        maxSum = max(maxSum, sum);
                }
        }

        cout << maxSum << endl;
}

void printSubarray2(int *arr, int n){
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i = 0; i < n; i++){
                sum += arr[i];
                maxSum = max(maxSum, sum);

                if(sum < 0){
                        sum = 0;
                }
        }

        cout << maxSum << endl;
}

int main(){
        int arr[6] = {2, -3, 6, -5, 4, -2};
        int n = 6;

        printSubarray2(arr, n);
        return 0;
}