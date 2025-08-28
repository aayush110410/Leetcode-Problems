class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS=INT_MIN;
        int sum= 0;
        int n = nums.size();
        for( int i= 0;i<n;i++){
            sum += nums[i];
            maxS= max(maxS, sum);
            if ( sum<0){
                sum=0;
            }
        }
        return maxS;
    }
};