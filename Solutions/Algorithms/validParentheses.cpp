/*
(20) Valid Parentheses
https://leetcode.com/problems/valid-parentheses/
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{')
                st.push(c);
            else if (st.empty() || 
                     c == ')' && st.top() != '(' ||
                     c == ']' && st.top() != '[' ||
                     c == '}' && st.top() != '{')
                return false;
            else
                st.pop();
        }
        return st.empty();
    }
};