#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string getOptions(int num){
	if (num == 2)
		return "abc";
	if (num == 3)
		return "def";
	if (num == 4)
		return "ghi";	
	if (num == 5)
		return "jkl";
	if (num == 6)
		return "mno";
	if (num == 7)
		return "pqrs";
	if (num == 8)
		return "tuv";
	return "wxyz";
}

vector<string> keypad(int num){
	if (num==0){
		vector<string> output(1);
		output[0] = "";
		return output;
	}

	int lastdigit = num % 10;
	int remaining_num = num / 10;

	vector<string> smalloutput = keypad(remaining_num);
	string lastdigitOptions = getOptions(lastdigit);

	vector<string> output(smalloutput.size() * lastdigitOptions.length());

	int k = 0;
	for(int i=0;i<lastdigitOptions.length();i++){
		for(int j=0;j<smalloutput.size();j++){
			output[k] = smalloutput[j]	+ lastdigitOptions[i];
			k++;
		}
	}
	return output;

}


int main() {

	vector<string> output;

	output = keypad(29);

	for(int i=0; i<output.size();i++){
		cout<<output[i]<<endl;
	} 

	return 0;
}
