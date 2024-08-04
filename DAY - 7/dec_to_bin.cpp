#include<iostream>
using namespace std;

void decToBin(int decNum){
        int n = decNum;
        int pow = 1;
        int binNum = 0;

        while(n > 0){
                int x = n % 2;
                binNum += x * pow;
                pow = pow * 10;
                n /= 2;
        }

        cout << binNum << endl;
}

int main(){
        decToBin(10);
        return 0;
}