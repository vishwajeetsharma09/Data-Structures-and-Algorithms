#include <bits/stdc++.h>
using namespace std;
int main()
{

    int nums[] = {
        4,
        2,
        1,
        4,
        5,
        7,
        8,
        -10,
    };
    int size = 8;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            index = i;
        }
        // if (nums[i] > largest)
        // {
        //     largest = nums[i];
        // }
    }

    cout << "Smallest number is:" << smallest << endl;
    cout << "index" << index;

    // cout << "largest number:" << largest;

    return 0;
}