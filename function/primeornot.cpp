#include <bits/stdc++.h>
using namespace std;

int Prime(int n)
{

    bool isPrime = true;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "number is prime";
    }
    else
    {
        cout << "number is not prime ";
    }
}
int main()
{
    int n;
    cin >> n;
    cout << Prime(n);
    return 0;
}