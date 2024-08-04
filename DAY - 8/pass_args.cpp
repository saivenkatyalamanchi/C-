#include<iostream>
using namespace std;

void changeA(int *ptr){
        *ptr = 20;
}

int main(){
        int a = 10;
        int &b = a;

        b = 25;
        cout << a << endl;
        changeA(&a);
        cout << a << endl;
        return 0;
}