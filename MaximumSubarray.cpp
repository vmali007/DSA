class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSOFar = INT_MIN;
        int maxSumAfterZero = 0;

        for(int i = 0;i<nums.size();i++){
            maxSumAfterZero += nums[i];
            if(maxSumAfterZero>maxSOFar){
                maxSOFar = maxSumAfterZero;
            }

            if(maxSumAfterZero<0){
                maxSumAfterZero = 0;
            }
        }
        return maxSOFar;     
    }
};
