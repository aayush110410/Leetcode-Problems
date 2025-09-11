class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();

        for (int i=0; i<n; i++)
        {
            freq[nums[i]]++;
        }

        for (auto it: freq)
        {
            if (it.second > n/2) {
                return it.first;
            }
        }
        return -1;
    }
};