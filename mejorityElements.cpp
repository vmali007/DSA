#include<iostream>
#include<vector>
#include<unordered_map>

int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto i :nums){
            mp[i]++;
        }
        for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;    
        }
        
        
        for(int i=0;i<nums.size();i++){
            if ((nums.size()/2)<mp[nums[i]]){
                ans = nums[i];
                break;
            }
        }
     return ans;   
    }

int main(){
    vector<int> nums{12,2,2,3,4,2,2,4,5,6};
    int ans = majorityElement(nums);
    return ans;

}