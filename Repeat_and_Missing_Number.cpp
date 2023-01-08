#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> count(n-1,0);
    pair<int,int> ans;

    for(int i=0;i<n;i++){
        count[arr[i+1]]++;
    }

    for(int i =0;i<n-1;i++){
        if(count[i] == 0){
            ans.fisrt = i+1;    
        }

        if(count[i] == 2){
            ans.second = i+1
            }
    }
    return ans;
	
}
