/*
    Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 
*/

#include <iostream>
#include <vector>
using namespace std;
#include <map>


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mpp;
        int n = nums.size();
        int mini = (int) (n/3) + 1;
        for(int i = 0; i< n; i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]] == mini) {
                ans.push_back(nums[i]);
            }
            if(ans.size()== 2) break;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
