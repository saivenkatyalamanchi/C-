#include<iostream>
using namespace std;

int main(){
        int a = 10;
        int *ptr = &a;

        int **pptr = &ptr;
        // cout << &a << endl;
        // cout << ptr << endl;
        cout << *ptr << endl;
        cout << **pptr << endl;
        cout << &ptr << " = " << pptr << endl;

        float pi = 3.14;
        float *ptr2 = &pi;

        // cout << &pi << " = " << ptr2 << endl;

        cout << sizeof(ptr) << " " << sizeof(ptr2) << endl;
        return 0;
}