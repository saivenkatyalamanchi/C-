#include<iostream>
using namespace std;

void binToDec(int binNum) {
        int n = binNum;
        int decNum = 0;
        int pow = 1;

        while(n > 0){
                int x = n % 10;
                decNum += x * pow;
                pow = pow * 2;
                n /= 10;
        }

        cout << decNum << endl;
}

int main(){
        
        binToDec(100011);
        return 0;
}