class Solution {
public:
    double myPow(double x, int nn) {
      double ans = 1.0;
      bool sign = (nn>=0);
      long long n = nn;

      n = abs(n);
      while(n){
          if(n%2){
              ans = ans * x;
              n--;
          }
          else{
              x = x * x;
              n = n / 2;
          }
      }
      if(!sign)
        ans = 1/ans; 
      return ans;
}
};
