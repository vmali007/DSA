class Solution {
public:
    int BinarySearch(int x){
        int start=0,end=x;
        long long int squere;
        
        while(start<=end){
        
            long long mid = start + (end-start)/2;
            
            squere = mid*mid;
            
            if (squere == x){
                return mid;
            }
            
            if (x < squere){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }

        }
    return end;    
    
    }
    
    int mySqrt(int x) {
        return BinarySearch(x);
    }
};