vector<int> reverse(vector<int> &arr)
{
	int s = 0,e = arr.size()-1;
    
    while(s<e){
        swap(arr[s],arr[e]);
    	s++;e--;
        }
    return arr;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int carry = 0; 
    int i = n-1,j = m-1;
    vector<int> res;
    while(i>=0 & j>=0){
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.push_back(sum);
        i--;j--;
    }
    
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.push_back(sum);  
        j--;
    }
    
        while(i>=0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.push_back(sum);  
        i--;
    }
    
    if(carry){
        res.push_back(carry);
    }
    
    reverse(res);
    
    return res;
}