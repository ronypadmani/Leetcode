/*
* Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

* You must write an algorithm that runs in O(n) time.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0) return 0;

        sort(nums.begin(), nums.end());
        int lastSmaller = INT_MIN;
        int cnt = 0;
        int longest = 1;

        for(int i=0; i<n; i++) {
            if(nums[i] - 1 == lastSmaller) {
                cnt += 1;
                lastSmaller = nums[i];
            } else if (lastSmaller != nums[i]) {
                cnt = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest,cnt);
        } 
        return longest;
    }
};