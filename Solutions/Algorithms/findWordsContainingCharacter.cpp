/*
(2942) Find Words Containing Character
https://leetcode.com/problems/find-words-containing-character/
*/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> vec;

        for (int i = 0; i < words.size(); i++)
            if (find(words[i].begin(), words[i].end(), x) != words[i].end())
                vec.push_back(i);
                
        return vec;
    }
};
