class Solution {
private:
     bool isPossible(vector<int>& nums,int mid, int m){
        int sa=1;
        int sum=0;
         
         for(int val:nums){
            sum+=val;
            if(sum>mid){
                sa++;
                sum = val;
            }
         }
         
         return sa <= m;
     
     }
    

public:
    int splitArray(vector<int>& nums, int m) {
        
        int maxi = 0;
        int sum = 0;
        
        for(int val : nums){
            sum += val;
            maxi = max(val,maxi);
        }
        
        if(m == nums.size()){
            return maxi;
        }
        
        int low=maxi;
        int high=sum;
        int ans=0;
        
        while(low<=high){
           
            int mid = low +(high - low)/2;

            if (isPossible(nums,mid,m) == true){
                ans = mid,
                high = mid-1;
                
            }
            else{
                low = mid+1;
                
            }
        }
        
        return ans;
    }
};