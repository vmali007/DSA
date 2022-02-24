#include<bits/stdc++.h>

using namespace std;

int fisrtBinarySearch(vector<int> nums, int num) {
        int left = 0, right = nums.size() - 1, mid;
        int result = -1;

        while (left <= right) {
            mid = right + (left - right) / 2;

            if (nums[mid] == num) {
                result = mid;
                right = mid - 1;
            }
            else if (nums[mid] > num) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return result;

    }
    
    int lastBinarySearch(vector<int> nums, int num) {
        int left = 0, right = nums.size() - 1, mid;
        int result = -1;

        while (left <= right) {
            mid = right + (left - right) / 2;

            if (nums[mid] == num) {
                result = mid;
                left = mid + 1;
            }
            else if (nums[mid] > num) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return result;
    }

vector<int> searchRange(vector<int>& nums, int target) {
        return {fisrtBinarySearch(nums, target), lastBinarySearch(nums, target)};
    }

int main(){
	int target = 8;
	vector<int> nums{5,7,7,8,8,10};
	vector<int> res = searchRange(nums,target);
	cout<<res[0]<<" "<<res[1]<<endl;
	return 0;
}
    
    