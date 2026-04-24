#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.size() - 1;

    int reversed = reverse(str.begin(), str.end());

    if (reversed == str)
    {
        return true;
    }
    else
        false;
}
int main()
{
    string str = "madam";
    isPalindrome(str);

    return 0;
}