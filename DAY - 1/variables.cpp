#include<iostream>
#include<iomanip>
using namespace std;

int main(){

        int a = 10;
        char grade = 'A';
        bool isAdult = true;
        float PI = 3.141592654397;
        double PI2 = 3.141592654397;

        cout << "a = " << a << endl;
        cout << "size of int = " << sizeof(int) << endl;
        cout << "size of char = " << sizeof(char) << endl;
        cout << "size of bool = " << sizeof(bool) << endl;
        cout << "size of float = " << sizeof(float) << endl;
        cout << setprecision(12) << PI << "       " << PI2 << endl;

        //This is a single line comment.

        /*
            This 
             is a 
             multi-line comment
        */

        return 0;
}