#include <iostream>
using namespace std;

int main()
{

        int day = 1;

        switch (day)
        {
        case 1:
                cout << "Monday" << endl;
                break;
        case 2:
                cout << "Tuesday" << endl;
                break;
        case 3:
                cout << "Wednesday" << endl;
        default:
                cout << "Day not found" << endl;
                break;
        }

        return 0;
}