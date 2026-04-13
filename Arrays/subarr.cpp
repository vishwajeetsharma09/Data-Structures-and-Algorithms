#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;

    int arr[6] = {1, 2, 3, 4, 5};

    // to print all possble subarry in array
    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = st; end < n; end++)
    //     {
    //         for (int i = st; i < end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // brute force code to print max sum of subarray
    // int maxSum = INT_MIN;
    // for (int st = 0; st < n; st++)
    // {
    //     int currSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout << maxSum;

    // optimal solution kadane algorithms

    int currSum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxsum = max(currSum, maxsum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << maxsum;

    return 0;
}