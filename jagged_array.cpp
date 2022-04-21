#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int rows;
	cin>>rows;

	int *col_len = new int[rows];

	for(int i=0;i<rows;i++){
		cin>>col_len[i];
	}

	int **arr = new int * [rows];
	for(int i=0;i<rows;i++){
		arr[i] = new int[col_len[i]];
	}


	for(int i=0;i<rows;i++){
		for (int j=0;j<col_len[i];j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<rows;i++){
		for (int j=0;j<col_len[i];j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
