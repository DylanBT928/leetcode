/*
(268) Missing Number
https://leetcode.com/problems/missing-number/
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] != nums [i] - 1)
                return nums[i] - 1;
        }
        if (find(nums.begin(), nums.end(), 0) == nums.end())
            return 0;
        else
            return nums.size();
    }
};
