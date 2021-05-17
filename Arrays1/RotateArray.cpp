




class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(k==0) return;
        
        int n = nums.size();
        if(n==1) return; if(n==k) return;
        
//         vector<int> res(n);
        
//         for(int i=0; i<n; i++)
//         {
//             res[(i+k)%n] = nums[i];
//         }
        
//         nums=res;
        k%=n;
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
        
    
        
    }
};