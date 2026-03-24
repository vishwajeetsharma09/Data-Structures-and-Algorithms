#include <bits/stdc++.h>
using namespace std;
int main()
{

    // factorila code
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        }
    cout << fact;

    // int n = 8;
    // int arr[8] = {1, 2, 4, 5, 7, 7, 5, 9};

    // sort(arr.begin(), arr.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    // // int largest = arr[0];
    // // // cout << largest;
    // // for (int i = 1; i < n; i++)
    // // {
    // //     if (arr[i] > largest)
    // //     {
    // //         largest = arr[i];
    // //     }
    // // }
    // // cout << largest;
    return 0;
}