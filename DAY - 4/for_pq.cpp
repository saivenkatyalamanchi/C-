#include<iostream>
using namespace std;

int main(){

        for(int i = 0; i < 4; i++){
                cout << "*******" <<endl;
        }

        int n;
        cout << "Enter n : ";
        cin >> n;

        for(int i = n; i >= 1; i--){
                cout << i << " ";
        }
        cout << endl;
        
        return 0;
}
