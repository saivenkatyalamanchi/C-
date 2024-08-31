#include<iostream>
using namespace std;

class Heap {
public:
        int arr[100];
        int size;

        Heap() {
                arr[0] = -1;
                size = 0;
        }

        // T C  =  O(logn)
        void insert(int val){
                size = size + 1;
                int idx = size;
                arr[idx] = val;

                while(idx > 1) {
                        int parent = idx/2;
                        if(arr[parent] < arr[idx]){
                                swap(arr[parent],arr[idx]);
                                idx = parent;
                        }
                        else{
                                return;
                        }

                }
        }

        void print() {
                for(int i=1; i<=size; i++){
                        cout << arr[i] << " ";
                }
                cout << endl;
        }

        void deleteHeap() {
                if(size == 0){
                        cout << "Heap is Empty" << endl;
                        return;
                }

                arr[1] = arr[size];
                size--;

                //take root node to its correct position

                int i = 1;
                while(i < size) {
                        int leftIdx = 2*i;
                        int rightIdx  = 2*i + 1;

                        if(leftIdx <= size && arr[i] < arr[leftIdx]){
                                swap(arr[i],arr[leftIdx]);
                                i = leftIdx;
                        }
                        else if(rightIdx <= size && arr[i] < arr[rightIdx]){
                                swap(arr[i],arr[rightIdx]);
                                i = rightIdx;
                        }else{
                                return;
                        }

                }
        }

        void heapify(int arr[], int n, int i) {
                int largest = i;
                
        }
};

int main(){
        Heap maxHeap;
        maxHeap.insert(50);
        maxHeap.insert(55);
        maxHeap.insert(53);
        maxHeap.insert(52);
        maxHeap.insert(54);
        maxHeap.print();
        maxHeap.deleteHeap();
        maxHeap.print();

        return 0;
}