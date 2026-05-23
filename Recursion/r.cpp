#include <bits/stdc++.h>
using namespace std;

// void printNum(int n)
// {
//     if (n == 1)
//     {
//         cout << n;
//         return;
//     }
//     cout << n << " ";
//     printNum(n - 1);
// }

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     return n * fact(n - 1);
// }

int main()
{

    int n = 5;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    // printNum(1);
    // cout << fact(4);
    return 0;
}