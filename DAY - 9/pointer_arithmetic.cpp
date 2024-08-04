#include<iostream>
using namespace std;

void printArray(int *ptr, int n) {
        for(int i = 0; i < n; i++){
                cout << *(ptr + i) << endl;
        }
}

int main(){
        // int arr[] = {1, 2, 3, 4, 5};
        // printArray(arr, 5);

        // int a = 5;

        int arr[20] = {1, 2, 3, 4, 5, 6};

        int *ptr1 = arr;
        int *ptr2 = ptr1 + 3;

        cout << (ptr1 == arr) << endl;

        return 0;
}