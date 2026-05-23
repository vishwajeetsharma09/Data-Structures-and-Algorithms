#include <bits/stdc++.h>
using namespace std;

string prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return "non prime";
        }
    }
    return "prime";
}

void Digits(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
}

// Armstrong NUmbers

bool isArmstrong(int n)
{
    int coptN = n;
    int sumOfDigit = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumOfDigit += (digit * digit * digit);
        n = n / 10;
    }
    return sumOfDigit == coptN;
}

int main()

{
    int n = 3586;
    // cout << prime(n) << endl;
    // Digits(n);
    if (isArmstrong(n))
    {
        cout << "is an armstrong number";
    }
    else
    {
        cout << "not an arnsstting number";
    }
    return 0;
}