/*
(50) Pow(x, n)
https://leetcode.com/problems/powx-n/
*/

class Solution {
public:
    double myPow(double x, int n) {
        switch (n)
        {
            case 0:
                return 1;
            case 1:
                return x;
            default:
                return pow(x, n);
        }
    }
};
