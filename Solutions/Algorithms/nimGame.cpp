/*
(292) Nim Game
https://leetcode.com/problems/nim-game/
*/

class Solution {
public:
    bool canWinNim(int n) {
        return (n & 3) != 0;
    }
};
