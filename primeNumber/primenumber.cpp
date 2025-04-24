#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << "not a  prime number";
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a prime number";
                break;
            }
            else
            {
                cout << n << " is a prime number";
                break;
            }
        }
    }
}