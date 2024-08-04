#include <iostream>
using namespace std;

int main()
{

        float a, b;
        char operation;

        cout << "Enter first number : ";
        cin >> a;
        cout << "Enter second number : ";
        cin >> b;
        cout << "Enter operation to be performed from (+, -, *, /) : ";
        cin >> operation;

        float result;

        switch (operation)
        {
        case '+':
                result = a + b;
                break;
        case '-':
                result = a - b;
                break;
        case '*':
                result = a * b;
                break;
        case '/':
                result = a / b;
                break;
        default:
                cout << "operation not supported" << endl;
                break;
        }

        cout << "The result " << a <<" " <<operation << " " << b << " = " << result <<endl;

        return 0;
}