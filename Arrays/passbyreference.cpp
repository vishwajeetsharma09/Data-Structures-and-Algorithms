#include <bits/stdc++.h>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "this isfunction";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{

    int arr[] = {
        4,
        2,
    };
    int size = 2;

    changeArr(arr, 2);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}