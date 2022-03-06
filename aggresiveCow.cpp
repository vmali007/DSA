bool isPossible(vector<int> &stalls, int k,int n,int mid){
    
    int cow_count = 1;
    int last_pos = stalls[0];
    for(int i =0; i<n;i++){
        if (stalls[i] - last_pos >= mid){
         	cow_count++; 
            if (cow_count == k){
                return true;
            }
            last_pos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s = 0,mid,ans=-1,n=stalls.size();
    
	int e=stalls[n-1];
    
    while(s<=e){
        mid = s + (e-s)/2;
        
        if(isPossible(stalls,k,n,mid)){
         
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid - 1;
        }
        
    }
    return ans;
}