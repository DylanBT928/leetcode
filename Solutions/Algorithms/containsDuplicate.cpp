/*
(217) Contains Duplicate
https://leetcode.com/problems/contains-duplicate/
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        for(int i : nums){
                if(hashset.find(i) != hashset.end())
                    return true;
                hashset.insert({i});
        }
        return false;
    }
};
