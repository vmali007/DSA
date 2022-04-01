class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        vector<int> count(n,0);
        
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if (count[i] > 1){
                ans = i;
                break;
            }           
        }
    return ans;
    }
};