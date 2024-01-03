/*
(128) Longest Consecutive Sequence
https://leetcode.com/problems/longest-consecutive-sequence/
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max = 1, streak = 1;
        sort(nums.begin(), nums.end());
        if(nums.size() == 0){
            return 0;
        } else if(nums.size() == 1){
            return 1;
        }
        else{
            for(int i = 0; i < nums.size()-1; i++){
                if(nums[i+1] == nums[i]+1)
                    streak++;
                if(max < streak)
                    max = streak;
                if(nums[i+1] != nums[i]+1 && nums[i+1] != nums[i])
                    streak = 1;
            }
            return max;
        }
    }
};