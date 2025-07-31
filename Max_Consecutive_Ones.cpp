/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int countpre = 0;
        int n = nums.size();
        
        for(int i=0; i<n; i++) {
            if(nums[i] == 1){
                count++;
            } else {
                count = 0;
            }
            if(count > countpre)
            countpre = count;
        }
        return countpre;
    } 
};