#include<iostream>
using namespace std;

int main(){

        int age;
        bool isAdult;

        cout << "Enter age : ";
        cin >> age;

        isAdult = (age >= 18) ? true : false;

        //Largest of two numbers
        int a = 3;
        int b = 10;

        int largest = (a >= b) ? a : b;
        cout << "Largest Value : " << largest << endl;

        return 0;
}