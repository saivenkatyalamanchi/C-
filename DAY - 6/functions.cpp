#include<iostream>
using namespace std;

int add(int a, int b = 1) {
        int sum = a + b;
        return sum;
}

int diff(int a, int b){
        int diff = a - b;
        return diff;
}

int product(int a, int b){
        int mul = a * b;
        return a * b;
}

bool isEven(int a){
        return (a % 2 == 0);
}

int main(){
        cout << isEven(19) << endl;
        return 0;
}

