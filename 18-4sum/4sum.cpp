class Solution {
public:
  	vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); 
    vector<vector<int>> result;

    int s = nums.size();

    if (s < 4) return result; 
    //used same alg as 3 sum , but 1 pointer was taken from ai
    for (int i = 0; i < s - 3; i++) { 
        if (i > 0 && nums[i] == nums[i-1]) continue;
        for (int j = i + 1; j < s - 2; j++) { 
            if (j > i + 1 && nums[j] == nums[j-1]) continue; 
            int k = j + 1;//used ai 
            int l = s - 1;

            while (k < l) {
              //  int sum =nums[i] + nums[j] + nums[k] + nums[l];
              // not compatible for test case 283  , using long long
             long long sum =(long long )nums[i] + nums[j] + nums[k] + nums[l];
            

                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[k], nums[l]});

                   
                    while (k < l && nums[k] == nums[k+1]) k++;
                    while (k < l && nums[l] == nums[l-1]) l--;

                    k++; 
                    l--; 
                } else if (sum < target) {
                    k++; 
                } else {
                    l--;
                }
            }
        }
    }
    return result;
}
};