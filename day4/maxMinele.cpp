#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {3, 9, 2, 7, 100};
    // int min = arr[0];

    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }
    // cout << "Minimum element: " << min;
    int arr[] = {3, 9, 2, 7, 100};
    int max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element: " << max;
    return 0;
}