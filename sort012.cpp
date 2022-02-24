#include<iostream>
#include<vector>

void sortColors(vector<int>& nums) {
        int low = 0,mid=0,high=nums.size()-1;
        
        while(mid<=high){
            if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;low++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
int main(){
    vector<int> nums{1,0,2,1,0,2,0,2,1,0};
    sortColors(nums);
    return 0;
}