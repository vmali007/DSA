class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int numSize = nums.size();
        vector<int> count(numSize-1,0);

        for(int i =0;i<numSize;i++){
            count[nums[i]-1]++;
        }

        for(int i=0;i<numSize-1;i++){
            if(count[i]>1)
                return i+1;
        }
        return -1;    
    }
};
