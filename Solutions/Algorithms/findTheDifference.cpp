/*
(389) Find the Difference
https://leetcode.com/problems/find-the-difference/
*/

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < t.length(); i++)
            if (t[i] != s[i])
                return t[i];
        return t[t.length() - 1];
    }
};
