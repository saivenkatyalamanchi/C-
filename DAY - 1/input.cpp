#include<iostream>

using namespace std;

int main() {
        
        float maths;
        float english;
        float science;

        cout << "Enter maths marks : ";
        cin >> maths;
        cout << "Enter english marks : ";
        cin >> english;
        cout << "Enter science marks : ";
        cin >> science;

        float averageMarks = (maths + english + science) / 3;
        /*
        int/int -> int.
        so make one of the operand float.
        */  
        cout<< "Average : " << averageMarks <<endl;

        return 0;
}