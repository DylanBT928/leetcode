/*
(4) Median of Two Sorted Arrays
https://leetcode.com/problems/median-of-two-sorted-arrays/
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> merge = nums1;
        merge.insert(merge.end(), nums2.begin(), nums2.end());
        sort(merge.begin(), merge.end());
        double med;
        if(merge.size()%2 == 0)
            med = (merge[merge.size()/2] + merge[(merge.size()/2)-1])/2.0;
        else
            med = merge[merge.size()/2.0];
        return med;
    }
};