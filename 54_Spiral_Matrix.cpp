/*
 * Given an m x n matrix, return all elements of the matrix in spiral order.
 */

 #include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        int n = A.size();
        int m = A[0].size();

        vector<int> ans;
        int left = 0; int right = m-1;
        int top = 0; int bottom = n-1;

        while(top <= bottom && left <= right) {
            // right
            for(int i = left; i<=right; i++) {
                ans.push_back(A[top][i]);
            }
            top++;

            // bottom
            for(int i = top; i <= bottom; i++) {
                ans.push_back(A[i][right]);
            }
            right--;

            //left
            if(top <= bottom) {
                for(int i = right; i >= left; i--){
                    ans.push_back(A[bottom][i]);
                }
            bottom--;
            }

            // top
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(A[i][left]);
                }
            left++;
            }
        }
        return ans;
    }
};