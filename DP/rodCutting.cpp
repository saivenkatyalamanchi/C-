#include<iostream>
using namespace std;


int maxPrice(int arr[],int n){
    if(n == 0){
        return 0;
    }

    int maxi = 0;
    for(int i=1;i<=n;i++){
        int price = arr[i-1] + maxPrice(arr,n-i);
        maxi = max(maxi,price);
    }

    return maxi;
}

int main(){
    int n = 8;
    int price[] =  {1, 5, 8, 9, 10, 17 , 17 , 20};

    int maxi = maxPrice(price, n);
    cout << maxi << endl;
    return 0;
}