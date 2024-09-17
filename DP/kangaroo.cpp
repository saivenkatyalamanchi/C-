#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int>& dp){
    if(dp[n] != 0){
        return dp[n];
    }
    if(n == 0){
        return 1;
    }

    if(n <= 2){
        return n;
    }

    if(n == 3){
        return 4;
    }

    return dp[n] = fib(n-1, dp) + fib(n-2, dp) + fib(n-3, dp);
}

int main(){
    int n = 34;
    vector<int> dp(n+1,0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    int ans = fib(n,dp);
    cout << ans << endl;
    return 0;
}