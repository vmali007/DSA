bool isPossible(vector<int> &boards,int k,int n,int mid){
    
    int painters = 1;
    int time = 0;
    for(int i =0;i<n;i++){
        if (time + boards[i] <= mid){
            time += boards[i];
        }
        else{
            painters++;
            if(painters > k || mid < boards[i]){
                return false;
            }
            time = boards[i];
        }
    }
    return true;
    
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0,e=0,mid,ans=-1,n=boards.size();
    
    for(int i = 0;i<n;i++){
        e += boards[i];
    }
    
    while(s<=e){
        mid = s + (e-s)/2;
        
        if(isPossible(boards,k,n,mid)){
            e = mid - 1;
            ans = mid;
        }
        else{
            s = mid + 1;
        }
        
    }
    return ans;
  
}