#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> v;
        for(int i=0;i<arr.size();i++)
        {
            int x=count(arr.begin(),arr.end(),arr[i]);
            v.push_back(x);
            i=i+x-1;
        }
        set<int> s(v.begin(),v.end());
        return v.size()==s.size();
    }


int main() {
	// Your code goes here;
	vector<int>nums{1,2,2,5,1,3};
	cout<<uniqueOccurrences(nums)<<endl;
	return 0;
}