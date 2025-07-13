class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int s = nums.size();
    if (s < 3) return {};

    vector<vector<int>> v;
    for (int i = 0; i + 2 < s; ++i) {
        if (i > 0 && nums[i] == nums[i-1]) continue;

        int j = i + 1, k = s - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                v.push_back({nums[i], nums[j], nums[k]});
                while (j < k && nums[j] == nums[j+1]) ++j;
                while (j < k && nums[k] == nums[k-1]) --k;
                ++j; --k;
            }
            else if (sum < 0) ++j;
            else --k;
        }
    }
    return v;
}
};