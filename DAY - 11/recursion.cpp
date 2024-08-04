#include<iostream>
using namespace std;

int factorial(int n){
        if(n == 0){
                return 1;
        }

        return n * factorial(n-1);
}

void printNumbers(int n){
        if(n == 0){
                return;
        }

        cout << n << " ";
        printNumbers(n-1);
}

int main(){
        
        printNumbers(7);
        return 0;
}