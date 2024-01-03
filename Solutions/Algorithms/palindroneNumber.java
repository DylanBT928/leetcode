/*
(9) Palindrome Number
https://leetcode.com/problems/palindrome-number/
*/

class Solution {
    public boolean isPalindrome(int x) {
        String str = String.valueOf(x);
        String str2 = "";
        for(int i = str.length(); i>0; i--){
            str2+=str.substring(i-1,i);
        }
        return str.equals(str2);
    }
}
