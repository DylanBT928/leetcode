/*
(1) Two-Sum
https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = 0, y = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size(); j++){
                if(nums[i]+nums[j]==target && i!=j){
                    x = i;
                    y = j;
                }
            }
        }
        return {x,y};
    }
};