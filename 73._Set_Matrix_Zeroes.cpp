/*
* Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
* You must do it in place.
*/

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return;  // Handle empty matrix

        int m = matrix[0].size();

        vector<int> row(n, 0);
        vector<int> cols(m, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(row[i] || cols[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
