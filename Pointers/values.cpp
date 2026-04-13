#include <bits/stdc++.h>
using namespace std;

void changeA(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int a = 5;
    // int *ptr = &a;

    // cout << &a << endl;
    // cout << *(&a) << endl;
    // cout << *(&ptr) << endl;

    changeA(&a);
    cout << a << endl;
    return 0;
}
