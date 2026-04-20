#include <bits/stdc++.h>
using namespace std;

void bublesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[smallestIdx])
                {
                    smallestIdx = j;
                }
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main()

{

    int n = 10;
    int arr[] = {4, 1, 5, 2, 3, 5, 6, 4, 33, 5};

    // bublesort(arr, n);
    // SelectionSort(arr, n);
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}