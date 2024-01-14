/*
(1929) Concatenation of Array
https://leetcode.com/problems/concatenation-of-array/
*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vec = nums;
        vec.insert(vec.end(), nums.begin(), nums.end());
        return vec;
    }
};
