#include <iostream>
#include<cmath>
using namespace std;

int main()
{

        int n = 13;
        bool isPrime = true;

        for (int i = 2; i <= sqrt(n); i++)
        {
                if (n % i == 0)
                {
                        isPrime = false;
                        break;
                }
        }

        if (isPrime)
        {
                cout << "Number is prime." << endl;
        }
        else
        {
                cout << "Number is not prime." << endl;
        }
        return 0;
}