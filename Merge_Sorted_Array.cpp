class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0,j = 0,k;

        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else{
                swap(nums1[i++],nums2[j]);
            }

            int first = nums2[0];
            for(k = 1;(k < n && nums2[k] < first);k++){

                nums2[k-1] = nums2[k];
            }
            nums2[k-1] = first;
        }

        while(j<n){
            nums1[i++] = nums2[j++];
        }
    }
};
