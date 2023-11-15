// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int m = nums1.size(), n = nums2.size();
        int medianPlace = (m + n + 1) / 2;
        for (int k = 0; k < medianPlace; k++) {
            if(nums1[i] > nums2[j]){
                
            }
        }
    }
};

int main(){
    Solution s;
    cout << s.findMedianSortedArrays({1,3}, {2});
    cout << s.findMedianSortedArrays({1,2}, {3,4});
    
}