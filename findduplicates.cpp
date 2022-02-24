#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        
        for(int i=0;i<nums.size();i++){
            int index = abs(nums[i]) - 1;
            
            if (nums[index]>0){
                nums[index] = - nums[index];
            }
            else{
                res.push_back(index+1);
            }
        }

        return res;
    }


int main() {
	// Your code goes here;
	vector<int>nums{4,3,2,7,8,2,3,1};
	vector<int> res =  findDuplicates(nums);
	for (int x : res)
        cout << x << " ";
	return 0;
}