#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int partition(int *arr,int s,int e){
	int pivot = arr[e];

	int i = (s - 1);  
  
    for (int j = s; j <= e - 1; j++)  
    {   
        if (arr[j] < pivot)  
        {  
            i++; 
            swap(arr[i],arr[j]);  
        }  
    }  
	swap(arr[i+1],arr[e]);

	return i+1;

}

void quicksort(int *arr,int s,int e){
	
	if(s>=e){
		return;
	}

	int pivot_index = partition(arr,s,e);

	quicksort(arr,s,pivot_index-1);
	quicksort(arr,pivot_index+1,e);
}


int main() {
	int arr[5] = {1,5,-1,9,6};
	int n = 5;
	quicksort(arr,0,n-1);

	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
