#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void merge(int *arr,int s,int e){
	int mid = s - (s - e)/2;

	int len_1 = mid - s + 1;
	int len_2 = e - mid;

	int *arr1 = new int[len_1];
	int *arr2 = new int[len_2];
	
	int k = s;
	for(int i=0;i<len_1;i++){
		arr1[i] = arr[k++];
	}

	k = mid+1;
	for(int i=0;i<len_2;i++){
		arr2[i] = arr[k++];
	}

	int index1 = 0;
	int index2 = 0;
	int min_index = s;

	while(index1<len_1 && index2<len_2){
		if(arr1[index1]<arr2[index2]){
			arr[min_index++] = arr1[index1++];
		}
		else{
			arr[min_index++] = arr2[index2++];
		}
	}

	while(index1<len_1){
		arr[min_index++] = arr1[index1++];
	}

	while(index2<len_2){
		arr[min_index++] = arr2[index2++];
	}
	delete []arr1;
	delete []arr2;

}

void mergesort(int *arr, int s, int e){
	if(s>=e){
		return;
	}
	int mid = s - (s - e)/2;

	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);

	merge(arr,s,e);

}

int main() {
	// Your code goes here;

	int arr[11] = {10,52,62,1,7,4,11,6,3,8,19};

	mergesort(arr,0,10);

	for(int i=0;i<11;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}
