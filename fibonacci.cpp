#include<iostream>
using namespace std;

int fibonacci(int n){
	int f1 = 0,f2 = 1,temp;

	if (n == 1) return 0;

	if (n == 2) return 1;

	for(int i=2;i<n;i++){
		temp = f1 + f2;
		f1 = f2;
		f2 = temp;
	}
	return f2;
}

int main(){
	int n;

	cin>>n;

	int ans = fibonacci(n);

	cout<<"Nth term in fibonacci is : "<<ans<<endl;


}