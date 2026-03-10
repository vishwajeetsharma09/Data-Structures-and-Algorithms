#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int res = n % 10;
        sum = sum / 10;
    }
    cout << sum;
}