#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n % 2 == 0)
    {
        cout << "even";
        break;
    }
    while (n % 2 != 0)
    {
        cout << "odd";
        break;
    }
    return 0;
}