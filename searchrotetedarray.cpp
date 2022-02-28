class Solution {
    
public:
    int search(vector<int>& nums, int target) {
    
        int pivot = getPivot(nums);
        
        if (nums[pivot]<=target && target<=nums[nums.size()-1]){
            return binarySearch(nums,pivot,nums.size()-1,target);
        }
        else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }

    
int getPivot(vector<int>& nums){
    int s = 0,e = nums.size()-1;
    
    int mid = s+(e-s)/2;
    
    while(s<e){
        if (nums[0]<=nums[mid]){
            s = mid+1;
        }
        else{
            e=mid;
        }    
        mid = s+(e-s)/2;
    }
    
    return s;
    
}
    
int binarySearch(vector<int>& nums,int s,int e,int key){
    int low = s, high = e;
	int mid = high + (low-high)/2;

	while(low<=high){
		if (nums[mid] == key){
			return mid;
		}
		if (nums[mid] < key){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
		mid = high + (low-high)/2;
	}
	return -1;
}

};