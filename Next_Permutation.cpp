class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakPoint = -1;
        int numsSize = nums.size();

        for(int i=numsSize-1;i>0;i--){
            if(nums[i-1]<nums[i]){
               breakPoint = i - 1;
               break; 
            }
        }

        if(breakPoint < 0){
           reverse(nums.begin(),nums.end());
           return; 
        }

        for(int i=numsSize-1;i>0;i--){
            if(nums[i]>nums[breakPoint]){
                swap(nums[i],nums[breakPoint]);
                reverse(nums.begin()+breakPoint+1,nums.end());
                break;
            }
        }
    return;
    }
};
