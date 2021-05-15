/*Given an integer array nums, move all 0's to the end of it while 
maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        if(n<2) return;
        int i=-1;
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=0)
                nums[++i] = nums[j];
        }
        
        for(int j = i+1;j<n;j++)
        {
            nums[j]=0;
        }
    }
};

