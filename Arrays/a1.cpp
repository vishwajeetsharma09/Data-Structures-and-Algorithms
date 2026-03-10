#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int marks[5] = {100, 99, 100, 123, 134};
    int size = 5;
    int marks[5];
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
    // // printing index of marks
    // cout << marks[0] << endl;
    // cout << sizeof(marks) / sizeof(int);

    marks[0] = 10001;
    for (int i = 0; i < size; i++)
    {

        cout << marks[i] << endl;
    }
    return 0;
}