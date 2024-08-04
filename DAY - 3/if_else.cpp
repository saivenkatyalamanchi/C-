#include<iostream>
using namespace std;

int main(){

        int age;
        cout << "Enter your age : ";
        cin >> age;

        if(age >= 18){
                cout << "Can vote" << endl;
        }
        else{
                cout << "Cannot vote" << endl;
        }

        if(age >= 45) {
                cout << "Can contest in elections." << endl;
        }

        return 0;
}