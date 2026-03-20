#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int maxsum = INT_MIN;

    int arr[6] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            // for (int i = st; i < end; i++)  thiss is for pront all the possoble subarry
            // {
            //     cout << arr[i];
            // }
            // cout << " ";
            int currentsum = 0;
            for (int end = st; end < n; end++)
            {
                currentsum = currentsum + arr[end];
                maxsum = max(currentsum, maxsum);
            }
        }
    }
    cout << maxsum;

    return 0;
}