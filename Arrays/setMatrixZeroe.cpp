#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        unordered_set<int> zeroRows, zeroCols;

        // for (int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==0){
        //             zeroRows.insert(i);
        //             zeroCols.insert(j);
        //         }
        //     }
        // }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    zeroRows.insert(i);
                    zeroCols.insert(j);
                }
            }
        }

        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(zeroRows.count(i)|| zeroCols.count(j)){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (zeroRows.count(i) || zeroCols.count(j)) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    obj.setZeroes(matrix);

    cout << "Output Matrix:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Time Complexity: O(m * n)
// Space Complexity: O(m + n)
//
// zeroRows stores at most m row indices
// zeroCols stores at most n column indices
//
// Therefore extra space = O(m + n)