#include <bits/stdc++.h>
using namespace std;

void rotateTheMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i + 1; j < matrix.size(); j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][if] = temp;
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        int left = 0;
        int right = matrix.size() - 1;
        while (left < right)
        {
            swap(matrix[i][left], matrix[i][right]);
            right--;
            left++;
        }
    }
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotateTheMatrix(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}