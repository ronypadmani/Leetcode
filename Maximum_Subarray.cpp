/*
 * Given an integer array nums, find the subarray with the largest sum, and return its sum.
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int currSum = 0;  int maxSum = INT_MIN;

      for(int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        
        if(currSum < 0)
        currSum = 0;
      }
      return maxSum;
    }
};