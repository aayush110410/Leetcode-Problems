class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        int globalMax = nums[0];
        int globalMin = nums[0];
        
        for (int i = 1; i < n; i++) {
            globalMax = max(globalMax, nums[i]);
            globalMin = min(globalMin, nums[i]);
        }
        int bestValue = globalMax - globalMin;
        return 1LL * bestValue * k;
    }
};
