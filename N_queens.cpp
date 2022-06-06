class Solution {
public:
    void Nqueens(vector<vector<string>>& ans,vector<string>& output,int col,int n,vector<int>& leftrow,vector<int>& leftupper,vector<int>& leftdown){
        if(col == n){
            ans.push_back(output);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(leftrow[row] == 0 && leftupper[n-1+col-row] == 0 && leftdown[col+row] == 0){
                
                leftrow[row] = 1;
                leftupper[n-1+col-row] = 1;
                leftdown[col+row] = 1;
                output[row][col] = 'Q';
                Nqueens(ans,output,col+1,n,leftrow,leftupper,leftdown);
                output[row][col] = '.';
                leftrow[row] = 0;
                leftupper[n-1+col-row] = 0;
                leftdown[col+row] = 0;
            }
        }
        
    }
        
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> output(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            output[i] = s;
        }
        
        vector<int> leftrow(n,0);
        vector<int> leftupper(2*n-1,0);
        vector<int> leftdown(2*n-1,0);
        
        Nqueens(ans,output,0,n,leftrow,leftupper,leftdown);
        
        return ans;
    }
};
