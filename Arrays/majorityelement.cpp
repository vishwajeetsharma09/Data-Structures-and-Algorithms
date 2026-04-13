#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 2, 1, 1 , 1, 2, 2,2 };
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int maj = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                maj++;
            }
        }
        if (maj > n / 2)
        {
            cout << maj;
            break;
        }
    }

    return 0;
}