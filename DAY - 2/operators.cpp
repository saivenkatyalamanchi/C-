#include<iostream>
using namespace std;


int main(){

        const float PI = 3.14; // Constants must be initialized
        const float g = 9.81;

        // Arithemtic Operators

        //Binary Operators
        int a = 5, b = 3;

        cout << "+ " << (a + b) << endl;
        cout << "- " << (a - b) << endl;
        cout << "* " << (a * b) << endl;
        cout << "/ " << (a / b) << endl;
        cout << "% " << (a % b) << endl;

        //Unary Operators   post and pre operations
        int c = 5;
        c++;
        cout << c << endl;
        c--;
        cout << c << endl;

        int d = c++;
        cout << d << endl;
        d = ++c;
        cout << d << endl;

        //Compound assignment operators
        int e = 30;
        e += 3;
        cout << e << endl;
        e -= 5;
        cout << e << endl;

        //Relational operators   >   <   >=    <=   ==   !=
        cout << (5 != 3) <<endl;

        //Logical Operators     &&      ||     !
        cout << ((3 < 5) && (10 == 5)) << endl;
        cout << ((3 > 5) ||  (10 == 5)) << endl;
        cout << !(3 == 5) << endl;

        return 0;
}