#include <bits/stdc++.h>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{

    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target > arr[mid])
        {
            st = mid + 1;
        }
        else if (target < arr[mid])
        {
            st = mid - 1;
        }
        else
            return mid;
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6};
    int target = 0;

    // cout << BinarySearch(arr, target);

    vector<int> arr1 = {1, 2, 4, 5, 6, 7};
    int tar = 6;
    cout << BinarySearch(arr1, tar);

    return 0;
}