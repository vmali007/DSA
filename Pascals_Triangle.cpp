class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> pascalTriangel;
     
     for(int i=1;i<=numRows;i++){
         vector<int> tempVector(i,1);
        for(int j=1;j<i-1;j++){
           tempVector[j] = pascalTriangel[i-2][j-1] + pascalTriangel[i-2][j];
        }
        pascalTriangel.push_back(tempVector);
     }
    return pascalTriangel;    
    }
};
