#include <iostream>
using namespace std;

int main()
{
        int n;

        do
        {
                cout << "Enter number : ";
                cin >> n;
                if (n % 10 == 0)
                {
                        continue;
                }
                cout << n << endl;

        } while (false); //for safety of terminal

        return 0;
}