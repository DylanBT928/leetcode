/*
(1) Two-Sum
https://leetcode.com/problems/two-sum/
*/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int x = 0, y = 0;
        for(int i = 0; i < nums.length; i++){
            for(int j = i; j < nums.length; j++){
                if(nums[i]+nums[j]==target && i!=j){
                    x = i;
                    y = j;
                }
            }
        }
        int[] answer = {x,y};
        return answer;
    }
}
