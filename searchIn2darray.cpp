class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int row_i=0,col_i=col-1;
        
        while(row_i < row && col_i>=0){
            
            int element  = matrix[row_i][col_i];
            
            if (element == target){
                return 1;
            }
            
            if(element < target){
                row_i++;
            }
            else{
                col_i--;
            }
        }
        return 0;
    }
};