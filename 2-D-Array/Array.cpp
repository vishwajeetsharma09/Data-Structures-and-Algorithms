#include <bits/stdc++.h>
using namespace std;

// pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (matrix[i][j] == key)
//             {
//                 return {i, j}; // return row and column
//             }
//         }
//     }
//     return {-1, -1}; // not found
// }

// int maxSum(int matrix[][3], int cols, int rows)
// {

//     int maxSumofrows = INT_MIN;
//     for (int j = 0; j < cols; j++)
//     {
//         int SumOfRows = 0;

//         for (int i = 0; i < rows; i++)
//         {
//             SumOfRows += matrix[i][j];
//         }
//         // cout << SumOfRows << " ";

//         maxSumofrows = max(maxSumofrows, SumOfRows);
//     }
//     return maxSumofrows;
// }

int main()
{
    // int matrix[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9},
    // };

    // int rows = 3;
    // int cols = 3;

    // pair<int, int> result = linearSearch(matrix, 4, 3, 8);

    // if (result.first != -1)
    //     cout << "Found at: (" << result.first << ", " << result.second << ")";
    // else
    //     cout << "Not found";
    // cout << maxSum(matrix, rows, cols);

    int matrix[4][3];
    int rows = 4;
    int cols = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // cin >> i >> j;
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}