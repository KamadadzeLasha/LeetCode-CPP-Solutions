/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

*/



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
   
    }
        vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> reverseMapping;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            int toFind = target - nums[i];
            if(reverseMapping.count(toFind)) {
                return {reverseMapping[toFind], i};
            }
            reverseMapping[nums[i]] = i;
        }
        return {};
    }
};