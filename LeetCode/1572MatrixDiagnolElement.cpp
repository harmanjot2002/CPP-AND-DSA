class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int diagonalSum = 0;
        // int len = mat.size() - 1;
        
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                
                if(i == j){
                    diagonalSum += mat[i][j];
                }
                else if(i == (mat.size()-1-j)){
                    diagonalSum += mat[i][j];
                }
            }
        }
        
        return diagonalSum;
    }
};