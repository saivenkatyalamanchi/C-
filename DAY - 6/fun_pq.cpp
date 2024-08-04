#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
        if(n == 0){
                return 1;
        }
        
        int fact = 1;
        for(int i = 1; i <= n; i++){
                fact = fact * i;
        }

        return fact;
}

bool isPrime(int n){
        if(n == 1){
                return false;
        }

        for(int i = 2; i <= sqrt(n); i++){
                if(n % i == 0){
                        return false;
                }
        }

        return true;
}

int binCoeff(int n, int r){
        int ans = factorial(n)/(factorial(n-r) * factorial(r));
        return ans;
}

int main(){
        
        cout << binCoeff(3, 2) << endl;
        return 0;
}