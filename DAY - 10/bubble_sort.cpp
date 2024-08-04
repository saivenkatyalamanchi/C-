#include <iostream>
using namespace std;

int main()
{
        int arr[10] = {19, -2, 4, 23, 84, -18, 3, 65, 1, 58};
        int n = 10;
        int flag = false;

        for (int i = 0; i < n - 1; i++)
        {
                for (int j = 0; j < n - i - 1; j++)
                {
                        if (arr[j] > arr[j + 1])
                        {
                                swap(arr[j], arr[j + 1]);
                                flag = true;
                        }
                }

                if (!flag)
                {
                        break;
                }
        }

        for (int i = 0; i < n; i++)
        {
                cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
}