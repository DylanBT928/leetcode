/*
(2469) Convert the Temperature
https://leetcode.com/problems/convert-the-temperature/
*/

class Solution {
    public double[] convertTemperature(double celsius) {
        return new double[] {celsius+273.15,celsius*1.8+32.0};
    }
}
