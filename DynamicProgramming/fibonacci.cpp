#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n){
        if(n == 0 || n == 1){
                return n;
        }

        return fibonacci(n-1) + fibonacci(n-2);
}

int fibDP(int n, vector<int>& f){
        if(n == 0 || n == 1){
                return n;
        }
        if(f[n] != -1){
                return f[n];
        }
        f[n] = fibDP(n-1,f) + fibDP(n-2,f);
        return f[n]; 
}

int main(){
        int n = 40;
        vector<int> f(n+1,-1);
        cout << fibDP(n, f) << endl;
        // cout << fibonacci(n) << endl;
        return 0;
}