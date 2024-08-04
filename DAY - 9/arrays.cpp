#include <iostream>
using namespace std;

int main()
{

        int arr[] = {5, 4, 3, 9, 2};
        int max = arr[0];

        for (int i = 0; i < 5; i++)
        {
                if (max < arr[i])
                {
                        max = arr[i];
                }
        }

        cout << max << endl;

        return 0;
}
