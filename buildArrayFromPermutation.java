/*
(1920) Build Array from Permutation
https://leetcode.com/problems/build-array-from-permutation/description/
*/

class Solution {
    public int[] buildArray(int[] nums) {
        int[] build = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            build[i] = nums[nums[i]];
        }
        return build;
    }
}
