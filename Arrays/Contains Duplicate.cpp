//Given an integer array nums, return true if any value appears at least twice in the array, 
//and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        if(n<2) return false;
     
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n-1;i++)
//         {
//             if(nums[i]==nums[i+1])  return true;
//         }
        
//         return false;
        
        unordered_set <int> res(n);
        for(auto i: nums)
        {
            if(res.find(i)!=res.end()) return true;
            res.insert(i);
        }
        
    return false;
        
        
    }
};