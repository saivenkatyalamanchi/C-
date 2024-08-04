#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int key) {
         for(int i = 0; i < n; i++){
                if(arr[i] == key){
                        return i;
                        break;
                }
        }

        return -1;
}

void printArray(int *arr, int n){
        for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
        }
        cout << endl;
}



int main(){
        int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
        int n = sizeof(arr)/sizeof(int);
        
        cout << linearSearch(arr, n, 12) << endl;

        printArray(arr, n);

        int i = 0;
        int j = n-1;

        while(i < j){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
        }

        printArray(arr, n);
       
        return 0;
}