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

    double moreprecision(int n, int tempsolution,int precision){
        double factor  = 1;
        double ans = tempsolution;

        for(int i =0 ; i<precision;i++){
            factor = factor/10;

            for(double j = ans;j*j < n;j+factor){
                ans = j;
            }
        }
        return ans;
    }
    
    int mySqrt(int x) {
        int tempsolution =  BinarySearch(x);


    }
};