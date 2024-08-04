#include<iostream>
using namespace std;

int main(){
        int arr[10] = {19, -2, 4, 23, 84, -18, 3, 65, 1, 58};
        int n = 10;
        
        for(int i = 1; i < n; i++){
                int curr = arr[i];
                int prev = i - 1;
                while(prev >= 0 && arr[prev] > curr){
                        swap(arr[prev], arr[prev+1]);
                        prev--;
                }

                arr[prev+1] = curr;
        }

        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
}