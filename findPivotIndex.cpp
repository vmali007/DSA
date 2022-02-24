#include<bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int>& nums) {
        int rsum = 0,lsum=0;
        
        rsum = accumulate(nums.begin(), nums.end(), 0);
        
        for(int i = 0;i<nums.size();i++){
            rsum -= nums[i];
            if (rsum==lsum){
                return i;
            }
            lsum += nums[i];
        }
        
        return -1;
    }

int main(){
    vector<int> nums{-1,-1,0,1,1,0};
    cout<<pivotIndex(nums)<<endl;
    return 0;
}