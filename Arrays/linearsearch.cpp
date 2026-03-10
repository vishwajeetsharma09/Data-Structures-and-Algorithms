#include <bits/stdc++.h>
using namespace std;

int linearSerch(int arr[], int size, int target)

{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {4, 2, 7, 8, 2, 5};
    int size = 6;
    int target = 1;
    cout << linearSerch(arr, size, target);
    return 0;
}

// int main()
// {

//     int arr[] = {1, 2, 4};
//     int size = 3;
//     int target = 1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             cout << i;
//             break;
//         } else if
//     }
//     cout << "-1";
//     return 0;
// }