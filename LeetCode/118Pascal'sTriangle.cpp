class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> A;
        for(int i=0;i<numRows;i++){
            vector<int> a;
            for(int j=0;j<=i;j++){
                if(i==j || j==0){
                    a.push_back(1);
                }
                else{
                    a.push_back(A[i-1][j-1]+A[i-1][j]);
                }
            }
            A.push_back(a);
        }
        return A;
    }
};