#include <bits/stdc++.h>
using namespace std;

// void sumofarr(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     cout << sum;
// }

// void profarr(int arr[], int size)
// {
//     int product = 1;
//     for (int i = 0; i < size; i++)
//     {
//         product = arr[i] * product;
//     }
//     cout << product;
// }

int swapmaxmin(int arr[], int size)
{
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex])

        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    swap(arr[minIndex], arr[maxIndex]);
}

int main()
{
    int arr[] = {3, 2, 1, 4, 5};
    int size = 5;
    // sumofarr(arr, size);
    // profarr(arr, size);
    swapmaxmin(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    return 0;
}