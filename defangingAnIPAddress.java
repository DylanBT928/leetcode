/*
(1108) Defanging an IP Address
https://leetcode.com/problems/defanging-an-ip-address/
*/

class Solution {
    public String defangIPaddr(String address) {
        String str = "";
        for(int i = 0; i<address.length(); i++){
            if(address.substring(i,i+1).equals(".")){
                str+="[.]";
            } else {
                str+=address.substring(i,i+1);
            }
        }
        return str;
    }
}
