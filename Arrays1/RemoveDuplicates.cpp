// Given a sorted array nums, remove the duplicates in-place such that each 
// element appears only once and returns the new length.

// Do not allocate extra space for another array, 
// you must do this by modifying the input array in-place 
// with O(1) extra memory.


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
    }
};