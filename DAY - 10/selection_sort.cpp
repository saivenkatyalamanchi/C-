#include<iostream>
using namespace std;

int main(){
        int arr[10] = {19, -2, 4, 23, 84, -18, 3, 65, 1, 58};
        int n = 10;
        
        for(int i = 0; i < n; i++){
                int minIdx = i;
                for(int j = i+1; j < n; j++){
                        if(arr[minIdx] > arr[j]){
                                minIdx = j;
                        }
                }

                swap(arr[minIdx],arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
}