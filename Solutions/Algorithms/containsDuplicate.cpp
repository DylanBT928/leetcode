/*
(217) Contains Duplicate
https://leetcode.com/problems/contains-duplicate/
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        for(int i = 0; i < nums.size(); i++){
                if(hashset.find(nums[i]) != hashset.end())
                    return true;
                hashset.insert({nums[i]});
        }
        return false;
    }
};
