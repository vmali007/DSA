#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int arr[],int n,int key){
	int low = 0, high = n-1;
	int mid = high + (low-high)/2;

	while(low<=high){
		if (arr[mid] == key){
			return mid;
		}
		if (arr[mid] < key){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
		mid = high + (low-high)/2;
	}
	return -1;
}

int main() {
	// Your code goes here;

	int arr1[] = {1,3,4,5,7,8,9,11};
	int arr2[] = {2,4,6,8,10};

	cout<<"Index of 1 is "<<BinarySearch(arr1,8,1)<<endl;
	cout<<"Index of 10 is "<<BinarySearch(arr2,5,10)<<endl;

	return 0;
}