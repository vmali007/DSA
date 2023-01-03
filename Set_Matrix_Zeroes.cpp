class Solution {

public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<pair<int, int>> IndexesWithZero;
        pair<int, int> currentIndexWithZero;
        for(int i=0;i<matrix.size();i++)
            for(int j =0;j<matrix[0].size();j++)
                if(matrix[i][j] == 0){
                    currentIndexWithZero.first = i;   
                    currentIndexWithZero.second = j;
                    IndexesWithZero.push_back(currentIndexWithZero);   
                }
        
        int row,column;    
        for(int k=0;k<IndexesWithZero.size();k++){    
            row = IndexesWithZero[k].first;
            column = IndexesWithZero[k].second;

            for(int i=0;i<matrix[0].size();i++){
                matrix[row][i] = 0;
            }
            for(int j=0;j<matrix.size();j++){
                matrix[j][column] = 0;
            }        
        }

    }
};
