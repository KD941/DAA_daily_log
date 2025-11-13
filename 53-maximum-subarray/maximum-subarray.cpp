class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = nums[0];
    int sum= nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
       
        sum = max(nums[i], sum + nums[i]);
        maxx = max(maxx, sum);
    }
    return maxx;
    }
};