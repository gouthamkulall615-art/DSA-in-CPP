#include <iostream>
#include <vector>
using namespace std;

int findMaxIndex(vector<vector<int>>& mat, int rows, int col)
{
    int maxValue = -1;
    int maxRow = -1;

    for (int i = 0; i < rows; i++)
    {
        if (mat[i][col] > maxValue)
        {
            maxValue = mat[i][col];
            maxRow = i;
        }
    }

    return maxRow;
}

vector<int> findPeakGrid(vector<vector<int>>& mat)
{
    int rows = mat.size();
    int cols = mat[0].size();

    int low = 0;
    int high = cols - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Find maximum element in current column
        int maxRow = findMaxIndex(mat, rows, mid);

        // Get left and right neighbours
        int left = -1;
        int right = -1;

        if (mid > 0)
        {
            left = mat[maxRow][mid - 1];
        }

        if (mid < cols - 1)
        {
            right = mat[maxRow][mid + 1];
        }

        // Current element is a peak
        if (mat[maxRow][mid] > left &&
            mat[maxRow][mid] > right)
        {
            return {maxRow, mid};
        }

        // Left neighbour is bigger → move left
        if (left > mat[maxRow][mid])
        {
            high = mid - 1;
        }

        // Right neighbour is bigger → move right
        else
        {
            low = mid + 1;
        }
    }

    return {-1, -1};
}

int main()
{
    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    vector<int> result = findPeakGrid(mat);

    cout << "Peak position: ["
         << result[0] << ", "
         << result[1] << "]" << endl;

    cout << "Peak element: "
         << mat[result[0]][result[1]] << endl;

    return 0;
}