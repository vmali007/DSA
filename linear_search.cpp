#include <iostream>

using namespace std;

int linear_search(int arr[],int size,int element){

	for(int i=0;i<size;i++){
		if (arr[i] == element){
			return i;
		}
	}
	return -1;
}

int main() {
	// Your code goes here;
	int arr[10] = {12,34,54,6,62,1221,31,23,4,34};
	int element = 10;
	int position = linear_search(arr,10,element);
	if (position != -1){
		cout<<"Element "<<element<<" is present at : "<<position<<endl;
	}
	else{
		cout<<"Element "<<element<<" is not present in the array"<<endl;
	}
	return 0;
}