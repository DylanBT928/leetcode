/*
(1295) Find Numbers with Even Number of Digits
https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for (int n : nums)
            if (to_string(n).length() % 2 == 0)
                even++;
        return even;
    }
};
